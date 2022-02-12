#pragma once


#include <iostream>
#include <string>

class Enemy{
public:
	Enemy() {
		m_Damage = 10;
		m_Warcry = "Roar!";
	}

	int getDamage() { return m_Damage; }
	std::string getWarcry() { return m_Warcry; }

	void setDamage(int points) { m_Damage = points; }
	void setWarcry(std::string roar ) { m_Warcry = roar; }

	virtual void Attack() = 0;
	//std::cout << "Enemy: " << Warcry << std::endl;
	//std::cout << "Deals " << Damage << " Damage To Oponent " << std::endl;

private:
	int m_Damage;
	std::string m_Warcry;
};
