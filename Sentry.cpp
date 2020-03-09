


#include <cmath>
#include <cassert>
#include <iostream>

#include "Sentry.h"

using namespace std;

Sentry::Sentry() : Monster()
{
	damage = 3;
	health = 20;
	points = 50;
	setPosition(toPosition(0, 0));
	starting = getPosition();
}

Sentry::Sentry(const Position& start) : Monster(start)
{
	damage = 2;
	health = 10;
	points = 20;
	starting = getPosition();
}

Sentry::Sentry(const Sentry& original) : Monster(original)
{

}

Sentry:: ~Sentry()
{
}

Sentry& Sentry::operator= (const Sentry& original)
{
	Monster :: operator=(original);
	return *this;
}

char Sentry::getDisplayChar() const
{
	return 'S';
}

Monster* Sentry::getClone() const
{
	return new Sentry(*this);
}

Position Sentry::calculateMove(const Game& game, const Position& player_position)
{
	Position sentrypos = getPosition();

	double distance1 = sqrt(pow(player_position.column - sentrypos.column, 2) + pow(player_position.row - sentrypos.row, 2));

	double distance2 = sqrt(pow(sentrypos.column - starting.column, 2) + pow(sentrypos.row - starting.row, 2));

	Position sentrp = calculateToPosition(game, sentrypos);
	Position playr = calculateToPosition(game, player_position);


	double totaldis = distance1 + distance2;

	if (totaldis > 6)
	{
		return sentrp;

	}
	else
	{

		return playr;

	}


}
