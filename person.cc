#include "person.h"
#include <iostream>
#include <cstdlib>

person::person(int i){
	statMax = 10;
	str = rand() % 10;
	dex = rand() % 10;
	con = rand() % 10;
	ints = rand() % 10;
	wis = rand() % 10;
	chr = rand() % 10;
	weightSize = rand() % 3;
	ac = 10 + dex;
	maxhealth = 5 + con;
	health = maxhealth;
	GovOpinon = 100;
	movespeed = 20;
	alive = true;
	id = i;
	
}

int person::preform(std::string stat) {
	if (stat == "str") {
		return (str / 2);
	}
	else if (stat == "dex") {
		return (dex / 2);
	}
	else if (stat == "con") {
		return (con / 2);
	}
	else if (stat == "int") {
		return (ints / 2);
	}
	else if (stat == "wis") {
		return (wis / 2);
	}
	else  {//must be chr
		return (chr / 2);
	}
}

void person::heal(int n) {
	health += n;
	if (health >= maxhealth) {
		health = maxhealth;
	}

}

void person::takeDamage(int n) {
	health -= n;
	if (health <= 0) {
		alive = false;
	}

}

void person::modifiGovOpinon(int n) {
	GovOpinon += n;
	if (GovOpinon > 100) {
		GovOpinon = 100;
	}
	if (GovOpinon < 0) {
		GovOpinon = 0;
	}

}

void person::print() {
	std::cout << "id =" << id << std::endl;
	std::cout << "str =" << str << std::endl;
	std::cout << "dex =" << dex << std::endl;
	std::cout << "con =" << con << std::endl;
	std::cout << "int =" << ints << std::endl;
	std::cout << "wis =" << wis << std::endl;
	std::cout << "chr =" << chr << std::endl;
}