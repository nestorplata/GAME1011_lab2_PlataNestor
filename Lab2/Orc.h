#pragma once

#include "Enemy.h"

class Orc : public Enemy
{
public:
	Orc() {
		setDamage(getDamage() * 2);
		setWarcry(getWarcry() + " AHHHHHHHHHH");
	}

	void Attack() {
		std::cout << "Orc: " << getWarcry() << " \"attacks\" " << getWarcry() << " \"attacks\"" << std::endl;
		std::cout << "Deals " << getDamage() << " damage to opponent" << std::endl;
	}
};