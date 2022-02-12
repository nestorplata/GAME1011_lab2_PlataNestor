#pragma once

#include "Enemy.h"

class Troll : public Enemy
{
public:
	Troll() {
		setDamage(getDamage() * 1.5);
		setWarcry(getWarcry() + " Grrrrrrrr");
	}

	void Attack() {
		std::cout << "Troll: " << getWarcry() << " \"hits one single attack to the opponent\" " << std::endl;
		std::cout << "Deals " << getDamage() << " damage to opponent" << std::endl;
	}
};