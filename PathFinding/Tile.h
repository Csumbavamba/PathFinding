#pragma once

enum Tag
{
	WALKABLE,
	UNWALKABLE
};

class Tile
{
public:
	Tile();
	~Tile();

	int FValue();

	int GetGValue() const;
	int GetHValue() const;
	Tag GetWalkability() const;

	void SetGValue(int gValue);
	void SetHValue(int hValue);
	void SetWalkability(Tag walkability);

private:

	Tag walkability;
	int gValue;
	int hValue;
};

