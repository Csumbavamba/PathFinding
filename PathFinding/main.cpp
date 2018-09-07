#include "Map.h"

#include <iostream>

int main()
{
	Map map;

	map.Initialise();
	map.DrawMap();

	int temp;
	std::cin >> temp;

	return 0;
}