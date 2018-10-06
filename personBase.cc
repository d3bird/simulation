#include "personBase.h"


personbase::personbase() {
	id = 0;
}

void personbase::createperson() {
	if (freeIDs.size() == 0) {

	}
	else {
		person* temp = new person(id);
		id++;
	}
//	node* insert = new node;
	//insert->data = temp;

	que.push(temp);

}

void personbase::remoceperson(int i) {

	person* temp;
	for (int i = 0; i < que.size(); i++) {
		temp = que.top();
		if (temp->getID() == i) {
			que.pop();
			freeIDs.push(i);
			return;
		}
	}
	cout << "id: " << i << " was not found" << endl;
}

person* personbase::getNextPerson() {
	person* output = que.top();
	que.pop;
	que.push(output);
	return output;
}