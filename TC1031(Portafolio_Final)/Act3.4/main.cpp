// ================================================================
// File: main.cpp
// Author: Frida Bailleres González 
// Date: 20/11/2022
// =================================================================
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include "selection.h"

using namespace std;

int main(int argc, char* argv[]) {

	ifstream input;
    ofstream mysolution;

	if (argc != 3)
	{
		std::cout << "Uso: " << argv[0] << " Input.txt Output.txt";
		return -1;
	}

	input.open(argv[1]);
	if (!input.is_open()){
		cout << "Error al abrir el archivo\n";
		return -1;
	}

	mysolution.open(argv[2]);

	unsigned int size, sum;
	vector <int> num;
	vector <int> suma;
	sum = 0;

	input >> size;

	num.resize(size);
	suma.resize(size - 1);

	for (int i = 0; i < size; i++) {
		input >> num[i];
	}

	selectionSort(num);

	for (int j = 0; j < size - 1; j++) {
		if (j == 0) {
			suma[j] = num [0] + num[1] - 1;
		}
		else {
			suma[j] = suma [j - 1] + num [j + 1] - 1;
		}
	}


	for (int k = 0; k < size -1; k++) {
		sum += suma[k];
	}


	mysolution << sum;

	input.close();
	mysolution.close();

	return 0;
}
