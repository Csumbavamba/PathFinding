#pragma once
#include "Position.h"

class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	virtual void Initialise(int x, int y) = 0;

	Position GetPosition() const;
	void SetPosition(Position position);

protected:

	Position position;
};

