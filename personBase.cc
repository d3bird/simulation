#include "personBase.h"


personbase::personbase() {
	id = 0;
}

void personbase::createperson() {
	person* temp = new person(id);
	id++;
	node* insert = new node;
	insert->data = temp;
}

void personbase::remoceperson(int id) {

}

person* personbase::getNextPerson() {

}