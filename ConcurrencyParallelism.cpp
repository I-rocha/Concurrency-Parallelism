// Concurrency and Parallelism
// Israel da Rocha


// C++	//
#include <iostream>
#include <omp.h>

//	Personal	//
#include "map.h"

int main()
{
	Map* obj = new Map();
	int** newGrid;

	obj->setFirstGrid();
	std::cout << "Condicao inicial: " << obj->NSociety() << std::endl;

	for (int i = 0; i < N_GEN; i++) {
		newGrid = obj->nextGen(HIGHLIFE);
		obj->setGrid(newGrid);
		std::cout << "Geracao " << i+1 << ": " << obj->NSociety() << std::endl;
	}
	obj->showState(0, 50);
	
}