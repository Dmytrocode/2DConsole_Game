#pragma once


#include "Monster.h"

class Attacker : public Monster {



public:
	Attacker();

	Attacker(const Position& start);

	Attacker(const Attacker& original);

	virtual ~Attacker();

	Attacker& operator= (const Attacker& original);

	virtual char getDisplayChar() const;

	virtual Monster* getClone() const;

	virtual Position calculateMove(const Game& game, const Position& player_position);


};