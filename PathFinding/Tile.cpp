#include "Tile.h"



Tile::Tile()
	:gValue(0)
	,hValue(0)
	,walkability(WALKABLE)
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

Tag Tile::GetWalkability() const
{
	return walkability;
}


void Tile::SetGValue(int gValue)
{
	this->gValue = gValue;
}

void Tile::SetHValue(int hValue)
{
	this->hValue = hValue;
}

void Tile::SetWalkability(Tag walkability)
{
	this->walkability = walkability;
}
