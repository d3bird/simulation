#pragma once
#include <string>


class person
{
public:
	person(int i);
	
	int preform(std::string stat);

	void heal(int n);
	void takeDamage(int n);
	void modifiGovOpinon(int n);
	void print();

	int getStr() { return str; }
	int getDex() { return dex; }
	int getCon() { return con; }
	int getInt() { return ints; }
	int getWis() { return wis; }
	int getChr() { return chr; }

	int getHealth() { return health; }
	int getAC() { return ac; }
	int getMovespeed() { return movespeed; }
	int getGovOpinon() { return GovOpinon; }
	int getID() { return id; }
	bool isAlive() { return alive; }

private:

	int id;

	bool alive;

	int str;
	int dex;
	int con;
	int ints;
	int wis;
	int chr;

	int statMax;

	int maxhealth; //5 + con;
	int health; //starts at max

	int ac;//10 +dex

	int movespeed;
	int weightSize;// how large the person is (1 is small, 2 is medium, 3 is large
	int GovOpinon;//out of 100, 100 pro gov, 0 hatred of gov
};
