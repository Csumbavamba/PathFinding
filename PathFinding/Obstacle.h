#pragma once

#include "Position.h"
#include "GameObject.h"

class Obstacle : public GameObject
{
public:
	Obstacle();
	virtual ~Obstacle();

	void Initialise(int x, int y);

};

