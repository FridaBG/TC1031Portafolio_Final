// =================================================================
// File: main.cpp
// Author: Frida Bailleres Gonzalez
// Date:12/09/2022
// =================================================================
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <ctime>
#include <time.h>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "insertion.h"

int main(int argc, char *argv[])
{
  ifstream inputFile;
  ofstream outputFile;

  if (argc !=3){

		cout<<"Uso: "<<argv[0]<<"Input.txt Output.txt";
		return -1;

	}

	inputFile.open(argv[1]);

	if (inputFile.fail()){

		cout<<"Error al abrir el archivo de entrada";
		return -1;
	}
	outputFile.open(argv[2]);

	if(outputFile.fail()){

		cout<<"Error al abrir el archivo de salida.";
		return -1;

	}

  int n;
  std::string idSearch, date, hour, port, id;


  struct shipStruct{

    int year;
    int month;
    int day;
    std::string dateString;
    std::string hour;
    std::string port;
    std::string id;

  };

  vector<shipStruct> ships;


  inputFile >> n;
  inputFile >> idSearch;

  for (int i = 0; i < n; i++)
  {
 
    inputFile >> date >> hour >> port >> id;

    std::string day = date.substr(0, date.find("-"));
    std::string month = date.substr(3, date.find("-"));
    std::string year = date.substr(6);

    std::size_t found = id.rfind(idSearch);
    if (found != string::npos) {

      ships.push_back({stoi(year), stoi(month), stoi(day), date, hour, port, id});

    }
  }


  insertionSortDay(ships);
  insertionSortMonth(ships);


  for (int i = 0; i < ships.size(); i++){

    outputFile << ships[i].dateString << " " << ships[i].hour << " " << ships[i].port << " " << ships[i].id << "\n";
    
  }

  inputFile.close();
  outputFile.close();

  return 0;
}