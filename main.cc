#include <iostream>
#include "person.h"
#include "personBase.h"

void cycle() {
	personbase pb;

	for (int i = 0; i < 4; i++) {
		pb.createperson();
	}
	int size = pb.getSize();
	for (int z = 0; z < size; z++) {
		pb.getNextPerson()->print();
	}
}

int main() {

	personbase pb;

	cycle();



	std::cin.get();
	return 0;
}