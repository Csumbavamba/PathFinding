#include "GameObject.h"


GameObject::GameObject()
{
}

GameObject::~GameObject()
{
}


Position GameObject::GetPosition() const
{
	return position;
}

void GameObject::SetPosition(Position position)
{
	this->position = position;
}
