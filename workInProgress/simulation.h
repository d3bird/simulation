#pragma once
#include "personBase.h"


class simulation
{
public:
	simulation();
	~simulation();

	void update();
	

	void changeSpeed(int i);
	int getSpeed() { return speed; }
	
	void pause() { running = false; }
	void unpause() { running = true; }
	bool isRunning() { return running; }

private:

	//int map[][];

	bool running;
	int speed;

	int metal;
	int food;
	int wood;
	int stone;




};

