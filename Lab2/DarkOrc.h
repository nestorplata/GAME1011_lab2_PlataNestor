#pragma once

#include "Orc.h"
class DarkOrc : public Orc
{
public:
	DarkOrc() {
		setWarcry("I conjure a Discord mod");
		m_Magic = " \"Discord mod bans you from the server\"";
	}

	void Attack() {
		std::cout << "Dark Orc: " << getWarcry() << m_Magic << std::endl;
		std::cout << "Deals emotional damage to opponent" << std::endl;
	}
private:
	std::string m_Magic;
};