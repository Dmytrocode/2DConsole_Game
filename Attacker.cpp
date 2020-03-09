


#include <cmath>
#include <cassert>
#include <iostream>

#include "Attacker.h"

using namespace std;

Attacker::Attacker() : Monster()
{
	damage = 2;
	health = 10;
	points = 20;
}

Attacker::Attacker(const Position& start) : Monster(start)
{
	damage = 2;
	health = 10;
	points = 20;

}

Attacker::Attacker(const Attacker& original) : Monster(original)
{

}

Attacker:: ~Attacker()
{
}

Attacker& Attacker::operator= (const Attacker& original)
{
	Monster :: operator=(original);
	return *this;
}

char Attacker::getDisplayChar() const
{
	return 'A';
}

Monster* Attacker::getClone() const
{
	return new Attacker(*this);
}

Position Attacker::calculateMove(const Game& game, const Position& player_position)
{

	Position playr = calculateToPosition(game, player_position);

	return playr;

}
