


#include <cmath>
#include <cassert>
#include <iostream>

#include "Game.h"
#include "Drone.h"

using namespace std;

Drone::Drone() : Monster()
{
	damage = 5;
	health = 50;
	points = 10;
	heya = 'N';

}

Drone::Drone(const Position& start) : Monster(start)
{
	damage = 2;
	health = 10;
	points = 20;
	heya = 'N';

}

Drone::Drone(const Drone& original) : Monster(original)
{

}

Drone:: ~Drone()
{
}

Drone& Drone::operator= (const Drone& original)
{
	Monster :: operator=(original);
	return *this;
}

char Drone::getDisplayChar() const
{
	return 'D';
}

Monster* Drone::getClone() const
{
	return new Drone(*this);
}

Position Drone::calculateMove(const Game& game, const Position& player_position)
{
	Position drone = getPosition();


	if (heya == 'N')
	{
		Position whatever = getPosition();
		whatever.row--;
		if (isValid(whatever) && !game.isBlockedForMonster(whatever))
		{
			return whatever;
		}
		else
		{
			heya = 'E';
			return getPosition();
		}
	}
	else if (heya == 'E')
	{
		Position whatevere = getPosition();
		whatevere.column++;
		if (isValid(whatevere) && !game.isBlockedForMonster(whatevere))
		{
			return whatevere;
		}
		else
		{
			heya = 'S';
			return getPosition();

		}
	}
	else if (heya == 'S')
	{
		Position whatevers = getPosition();
		whatevers.row++;
		if (isValid(whatevers) && !game.isBlockedForMonster(whatevers))
		{
			return whatevers;
		}
		else
		{
			heya = 'W';
			return getPosition();

		}
	}
	else 
	{
		Position whateverw = getPosition();
		whateverw.column--;
		if (isValid(whateverw) && !game.isBlockedForMonster(whateverw))
		{
			return whateverw;
		}
		else
		{
			heya = 'N';
			return getPosition();

		}

	}


}
