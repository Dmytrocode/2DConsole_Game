#pragma once


#include "Monster.h"

class Sentry : public Monster {



public:
	Sentry();

	Sentry(const Position& start);

	Sentry(const Sentry& original);

	virtual ~Sentry();

	Sentry& operator= (const Sentry& original);

	virtual char getDisplayChar() const;

	virtual Monster* getClone() const;

	virtual Position calculateMove(const Game& game, const Position& player_position);

private:
	Position starting;


};