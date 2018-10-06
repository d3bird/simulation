#include <iostream>
#include "person.h"
#include "personBase.h"


int main() {

	personbase pb;

	person t(1);
	person f(2);
	t.print();
	f.print();

	std::cin.get();
	return 0;
}