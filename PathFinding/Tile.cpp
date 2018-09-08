#include "Tile.h"
#include "Obstacle.h"
#include "GameObject.h"



Tile::Tile()
	:gValue(0)
	,hValue(0)
	,isWalkable(true)
{
}


Tile::~Tile()
{
}

int Tile::FValue()
{
	return gValue + hValue;
}

int Tile::GetGValue() const
{
	return gValue;
}

int Tile::GetHValue() const
{
	return hValue;
}

bool Tile::IsWalkable()
{
	if (objectOnTile == nullptr)
	{
		isWalkable = true;
	}
	else
	{
		isWalkable = false;
	}
		

	return isWalkable;
}


void Tile::SetGValue(int gValue)
{
	this->gValue = gValue;
}

void Tile::SetHValue(int hValue)
{
	this->hValue = hValue;
}

void Tile::SetIsWalkable(bool isWalkable)
{
	this->isWalkable = isWalkable;
}


void Tile::PlaceObject(GameObject * object)
{
	objectOnTile = object;
}

void Tile::RemoveObject()
{
	objectOnTile = nullptr;
}
