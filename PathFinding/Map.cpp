#include "Map.h"
#include "Tile.h"


#include <iostream>


Map::Map()
{

}


Map::~Map()
{
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			delete map[i][j];
			map[i][j] = NULL;
		}
	}
}

Tile * Map::GetTileAt(int row, int column) const
{
	return map[row][column];
}

void Map::Initialise()
{
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			map[i][j] = new Tile();
		}
	}
}

void Map::DrawMap()
{
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			// TODO make map drawing outside of class
			if (map[i][j]->GetWalkability() == WALKABLE)
			{
				std::cout << "-";
			}
			else
			{
				std::cout << "O";
			}
		}
		std::cout << std::endl;
	}
}
