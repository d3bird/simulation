#pragma once
#include "personBase.h"

class company
{
public:
	company();
	~company();

	void HirePerson(person* i);
	void firePerson();//at random
	void firePerson(person* i);

	void payDay();

private:
	personbase *pb;


};
