#pragma once
#include "person.h"
#include <queue>
#include <stack>

struct node{
	node*left;
	node* right;
	person* data;
};


class personbase{
public:

	personbase();
	
	void createperson();
	void remoceperson(int i);
	
	person* getNextPerson();

	int getSize() { return que.size(); }

private:
	std::queue<person*> que;
	std::stack<int> freeIDs;
	node * head;
	int id;

};
