#pragma once
#include <string>
#include <vector>
#include "person.h"
#include "company.h"

class building
{
public:
	building();
	

	bool isDestoried() { return destoried; }

	void setZoneType(int i) { zonetype = i; }
	int getZoneType() { return zonetype; }

	void setAcre(int i) { acre = i; }
	int getAcre() { return acre; }

	void setPersonOwner(person* i) { peronOwner = i; }
	person* getPersonOwner() { return peronOwner; }

	void setCompanyOwner(company* i) { company = i; }
	company* getCompanyOwner() { return companyowner; }

	int getHitPoints() { return hit; }
	void damage(int i) { hit -= i; if (hit <= 0) { destoried = true; } }
	void repair(int i) { hit += i; if (hit > maxhit) { hit = maxhit; } }

	int getValue() { return value; }
	int modifiVaule(int i) { vaule += i; }

private:
	bool destoried;
	
	int acre;
	int zonetype;
	person* peronOwner;
	company* companyowner;

	int maxhit;
	int hit;

	int madefrom;
	int resourseAmount;

	int value;
};

building::building(){
	destoried = false;
	acre = 1;
	zonetype = 0;
	peronOwner = NULL;
	companyowner = NULL;
	maxhit = 10;
	hit = maxhit;
	madefrom 0;
	resourseAmount = 0;
	value = 5;
}
