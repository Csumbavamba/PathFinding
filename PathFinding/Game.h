#pragma once
#include <vector>

class Map;
class Player;
class Obstacle;

class Game
{
public:
	Game();
	~Game();

	void Initialise();

	void Draw();

	void GenerateObstacles();
	


private:

	Map * map = nullptr;
	Player * player = nullptr;
	std::vector<Obstacle*> obstacles;
	int numberOfObstacles = 10;

};

