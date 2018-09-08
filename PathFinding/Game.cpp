#include "Game.h"
#include "Map.h"
#include "Player.h"
#include "Obstacle.h"
#include "Tile.h"

#include<cstdlib>
#include<ctime>



Game::Game()
{
	srand(time(NULL));
}


Game::~Game()
{
	// TODO destroy Obstacles and Map elements
	for (int i = 0; i < obstacles.size(); ++i)
	{
		delete obstacles[i];
		obstacles[i] = NULL;
	}
}

void Game::Initialise()
{
	// Create map
	map = new Map();
	map->Initialise();

	// Create Obstacles
	GenerateObstacles();
	


}

void Game::Draw()
{
	map->DrawMap();
}

void Game::GenerateObstacles()
{
	bool isPlaced;

	for (int i = 0; i < numberOfObstacles; ++i)
	{
		isPlaced = false;
		// Repeat until placed
		do
		{
			// Select Random position for placement
			int randomPositionX = rand() % 20;
			int randomPositionY = rand() % 20;


			Tile * inspectedTile = map->GetTileAt(randomPositionX, randomPositionY);

			if (inspectedTile->IsWalkable() == true) // If it's empty
			{
				Obstacle * obstacle = new Obstacle();

				obstacle->Initialise(randomPositionX, randomPositionY);
				obstacles.push_back(obstacle);

				// Place obstacle on Tile
				inspectedTile->PlaceObject(obstacle); // TODO figure out how to do this
														  // inspectedTile->PlaceObject(obstacle);
				inspectedTile->SetIsWalkable(false);

				isPlaced = true;
			}

		} while (!isPlaced);

	}
}
