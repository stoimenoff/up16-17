#include <iostream>
using namespace std;

/*
Задача 4. Лабиринт се представя като квадратна матрица
от символи с размери 10x10, където празна клетка се
представя с интервал, непроходима клетка се представя
със символа '#', а в клетки, означени със символа '$'
е поставена кесия със жълтици. Юнакът влиза в лабиринта
 от най-горната лява клетка и на всяка стъпка може да
  избира да продължи на изток, запад, север или юг, но
   след като мине през някоя клетка, след него таванът
    се срутва и клетката става непроходима.
Да се напише програма, която прочита лабиринт от
клавиатурата и определя дали е възможно Юнакът да
събере всички жълтици, след което да излезе от
лабиринта от най-долната дясна клетка.
Упътване: Юнакът може предварително да провери колко
кесии жълтици има в лабиринта, за да може да разбере
дали в даден момент е събрал всички.
*/

/*

  ########
#     $  #
## $##  ##
#    #   #
##   #$  #
###   #  #
# #$  # ##
# $      #
#    $# $#
########

*/

const unsigned int MAZE_SIZE = 10;
char MAZE[MAZE_SIZE][MAZE_SIZE + 1];
const char EMPTY = ' ';
const char WALL = '#';
const char GOLD = '$';

void printMaze()
{
	for (int i = 0; i < MAZE_SIZE; ++i)
	{
		for (int j = 0; j < MAZE_SIZE; ++j)
		{
			cout << MAZE[i][j];
		}
		cout << endl;
	}
}

unsigned int scanForGold()
{
	unsigned int gold = 0;
	for (int i = 0; i < MAZE_SIZE; ++i)
		for (int j = 0; j < MAZE_SIZE; ++j)
			if (MAZE[i][j] == GOLD)
				gold += 1;
	return gold;
}

bool canGoTo(unsigned int i, unsigned int j, unsigned int goldToPickUp)
{
	if (MAZE[i][j] == WALL)
		return false;

	if (i == 0 && j == 0)
	{
		if (goldToPickUp > 1)
			return false;
		else if (goldToPickUp == 1)
			return MAZE[0][0] == GOLD;
		else
			return true;
	}

	char ORIGINAL_CELL = MAZE[i][j];
	unsigned int goldToPickUpToNeighbours = goldToPickUp;

	if (MAZE[i][j] == GOLD)
	{
		goldToPickUpToNeighbours -= 1;
	}

	MAZE[i][j] = WALL;

	bool possible = false;
	if (i > 0 && canGoTo(i - 1, j, goldToPickUpToNeighbours))
		possible = true;
	else if (i < MAZE_SIZE - 1 && canGoTo(i + 1, j, goldToPickUpToNeighbours))
		possible = true;
	if (j > 0 && canGoTo(i, j - 1, goldToPickUpToNeighbours))
		possible = true;
	else if (j < MAZE_SIZE - 1 && canGoTo(i, j + 1, goldToPickUpToNeighbours))
		possible = true;

	MAZE[i][j] = ORIGINAL_CELL;

	return possible;
}

void inputMaze()
{
	for (int i = 0; i < MAZE_SIZE; ++i)
		cin.getline(MAZE[i], MAZE_SIZE + 1);
}



int main()
{
	inputMaze();
	printMaze();
	unsigned int gold = scanForGold();
	cout << canGoTo(MAZE_SIZE - 1, MAZE_SIZE - 1, gold) << endl;

	return 0;
}
