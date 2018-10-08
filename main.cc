#include <iostream>
#include "person.h"
#include "personBase.h"

void cycle(personbase&pb) {//cycles through all of the people
	
	for (int z = 0; z < pb.getSize(); z++) {
		pb.getNextPerson()->print();
		std::cout << std::endl;
	}
}

int main() {

	personbase pb;
	for (int i = 0; i < 4; i++) {
		pb.createperson();
	}
	cycle(pb);
	pb.getNextPerson();

	std::cout << std::endl;
	std::cout<<"the next cycle" << std::endl;

	cycle(pb);

	std::cin.get();
	return 0;
}