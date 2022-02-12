#pragma once

#include "Enemy.h"

class Eskeleton : public Enemy
{
public:
	Eskeleton() {
		setWarcry(getWarcry() + " Hssssssssssss");
		setDamage(getDamage());
	}

	void Attack() {
		std::cout << "Eskeleton: " << getWarcry() << " \"Hits Two quick attacks\"" << std::endl;
		std::cout << "Deals " << getDamage()<< " damage to the opponent " << std::endl;
	}
};