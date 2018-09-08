#pragma once

class Obstacle;
class GameObject;


class Tile
{
public:
	Tile();
	~Tile();

	int FValue();

	int GetGValue() const;
	int GetHValue() const;
	bool IsWalkable();

	void SetGValue(int gValue);
	void SetHValue(int hValue);
	void SetIsWalkable(bool isWalkable);

	void PlaceObject(GameObject * object);
	void RemoveObject();

private:
	bool isWalkable;
	int gValue;
	int hValue;

	GameObject * objectOnTile = nullptr;
};

