#pragma once
#include "personBase.h"
#include "government.h"

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
	bool running;
	int speed;

	government gov();

};

