// Concurrency and Parallelism
// Israel da Rocha


// C++	//
#include <iostream>
#include <omp.h>

//	Personal	//
#include "map.h"
#include "mapCon.h"

int main()
{
	Map* obj = new Map();
	int** newGrid;
	int i = 1;

	obj->setFirstGrid();
	std::cout << "Condicao inicial: " << obj->NSociety() << std::endl;

	for (i = 1; i <= N_GEN; i++) {
		newGrid = obj->nextGen(HIGHLIFE);
		obj->setGrid(newGrid);
		

		if (i <= 5) {
			std::cout << "Geracao " << i << ": " << obj->NSociety() << std::endl;
			obj->showState(0, 50);
		}
	}
	std::cout << "Geracao " << i-1 << ": " << obj->NSociety() << std::endl;
	

	//MapCon* obj = new MapCon();
	//int** newGrid;
	//int i = 1;

	//omp_set_num_threads(N_TRHEADS);

	//obj->setFirstGrid();
	//std::cout << "Condicao inicial: " << obj->NSociety() << std::endl;
	//
	//for (i = 1; i <= N_GEN; i++) {
	//	newGrid = obj->nextGen(JOGO_DA_VIDA);
	//	obj->setGrid(newGrid);

	//	if (i <= 5) {
	//		std::cout << "Geracao " << i << ": " << obj->NSociety() << std::endl;
	//		obj->showState(0, 50);
	//	}
	//}

	//std::cout << "Geracao " << i - 1 << ": " << obj->NSociety() << std::endl;
	
}