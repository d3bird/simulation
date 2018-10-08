#include "personBase.h"
#include <iostream>

personbase::personbase() {
	id = 0;
}

void personbase::createperson() {
	person* temp;
	if (freeIDs.size() == 0) {
		 temp = new person(id);
		id++;
	}
	else {
		 temp = new person(freeIDs.top());
		freeIDs.pop();
	}
//	node* insert = new node;
	//insert->data = temp;

	que.push(temp);

}

void personbase::remoceperson(int i) {

	person* temp;
	for (int x = 0; x < que.size(); x++) {
		temp = que.front();
		if (temp->getID() == i) {
			delete temp;
			que.pop();
			freeIDs.push(i);
			return;
		}
	}
	std::cout << "id: " << i << " was not found" << std::endl;
}

person* personbase::getNextPerson() {
	person* output = que.front();
	que.pop();
	que.push(output);
	return output;
}