// =================================================================
// File: ship.h
// Autores: 
//Marco Randu Retana Vargaa - A01709521
//Frida Bailleres González - A01708633
// Date: 18/11/2022
// =================================================================∫
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

#include "ship.h"
#include "sort.h"
#include "list.h"

using namespace std;

string int2month(int month_int);

int main(int argc, char* argv[]) {
	ifstream inputFile;
    ofstream outputFile;

    inputFile.open("input4.txt");
    outputFile.open("mySolution4.txt");


	int min, h, d, mes, an, N;
	std::string find, fecha, hora, UBI;
	char input;

	inputFile >> N >> find;

	vector <Ship> Ships(N);

	for(int i = 0; i < N; i++){
		inputFile >> fecha >> hora >> input >> UBI;

       	d = (fecha[0]-'0')*10 + (fecha[1]-'0');
        mes = (fecha[3]-'0')*10 + (fecha[4]-'0');
        an = (fecha[6]-'0')*10 + (fecha[7]-'0');

        h = (hora[0]-'0')*10 + hora[1]-'0';
        min = (hora[3]-'0')*10 + hora[4]-'0';

        Ships[i] = Ship(d, mes, an, h, min, input, UBI);
	}

	selectionSort(Ships);

    List <Ship> Ships_1_R, Ships_1_M;
    List <Ship> Ships_2_R, Ships_2_M;
    List <Ship> Ships_3_R, Ships_3_M;
    List <Ship> Ships_4_R, Ships_4_M;
    List <Ship> Ships_5_R, Ships_5_M;
    List <Ship> Ships_6_R, Ships_6_M;
    List <Ship> Ships_7_R, Ships_7_M;
    List <Ship> Ships_8_R, Ships_8_M;
    List <Ship> Ships_9_R, Ships_9_M;
    List <Ship> Ships_10_R, Ships_10_M;
    List <Ship> Ships_11_R, Ships_11_M;
    List <Ship> Ships_12_R, Ships_12_M;

    for (int i = 0; i < N; i++){

        std::string ubi = Ships[i].UBI;
        std ::string first = ubi.substr(0, 3);

		if(first == find){
            if(Ships[i].mes == 1){

                if(Ships[i].input == 'R'){
                    Ships_1_R.push_back(Ships[i]);
                }

                else{
                    Ships_1_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 2){
                if(Ships[i].input == 'R'){
                    Ships_2_R.push_back(Ships[i]);
                }

                else{
                    Ships_2_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 3){
                if(Ships[i].input == 'R'){
                    Ships_3_R.push_back(Ships[i]);
                }

                else{
                    Ships_3_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 4){
                if(Ships[i].input == 'R'){
                    Ships_4_R.push_back(Ships[i]);
                }

                else{
                    Ships_4_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 5){
                if(Ships[i].input == 'R'){
                    Ships_5_R.push_back(Ships[i]);
                }

                else{
                    Ships_5_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 5){
                if(Ships[i].input == 'R'){
                    Ships_5_R.push_back(Ships[i]);
                }

                else{
                    Ships_5_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 6){
                if(Ships[i].input == 'R'){
                    Ships_6_R.push_back(Ships[i]);
                }

                else{
                    Ships_6_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 7){
                if(Ships[i].input == 'R'){
                    Ships_7_R.push_back(Ships[i]);
                }

                else{
                    Ships_7_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 8){
                if(Ships[i].input == 'R'){
                    Ships_8_R.push_back(Ships[i]);
                }
                
                else{
                    Ships_8_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 9){
                if(Ships[i].input == 'R'){
                    Ships_9_R.push_back(Ships[i]);
                }

                else{
                    Ships_9_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 10){
                if(Ships[i].input == 'R'){
                    Ships_10_R.push_back(Ships[i]);
                }

                else{
                    Ships_10_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 11){
                if(Ships[i].input == 'R'){
                    Ships_11_R.push_back(Ships[i]);
                }

                else{
                    Ships_11_M.push_back(Ships[i]);
                }
            }


            else if(Ships[i].mes == 12){
                if(Ships[i].input == 'R'){
                    Ships_12_R.push_back(Ships[i]);
                }
                else{
                    Ships_12_M.push_back(Ships[i]);
                }
            }
        }
    }


    outputFile << "jan" << '\n';
    outputFile <<  "M" << " " << Ships_1_M.length() << ":" << " ";
    for (int i = 0; i < Ships_1_M.length(); i++){
        outputFile << Ships_1_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_1_R.length() << ":" << " ";
    for (int i = 0; i < Ships_1_R.length(); i++){
        outputFile << Ships_1_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "feb" << '\n';
    outputFile <<  "M" << " " << Ships_2_M.length() << ":" << " ";
    for (int i = 0; i < Ships_2_M.length(); i++){
        outputFile << Ships_2_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_2_R.length() << ":" << " ";
    for (int i = 0; i < Ships_2_R.length(); i++){
        outputFile << Ships_2_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "mar" << '\n';
    outputFile <<  "M" << " " << Ships_3_M.length() << ":" << " ";
    for (int i = 0; i < Ships_3_M.length(); i++){
        outputFile << Ships_3_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_3_R.length() << ":" << " ";
    for (int i = 0; i < Ships_3_R.length(); i++){
        outputFile << Ships_3_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "apr" << '\n';
    outputFile <<  "M" << " " << Ships_4_M.length() << ":" << " ";
    for (int i = 0; i < Ships_4_M.length(); i++){
        outputFile << Ships_4_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_4_R.length() << ":" << " ";
    for (int i = 0; i < Ships_4_R.length(); i++){
        outputFile << Ships_4_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "may" << '\n';
    outputFile <<  "M" << " " << Ships_5_M.length() << ":" << " ";
    for (int i = 0; i < Ships_5_M.length(); i++){
        outputFile << Ships_5_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_5_R.length() << ":" << " ";
    for (int i = 0; i < Ships_5_R.length(); i++){
        outputFile << Ships_5_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "jun" << '\n';
    outputFile <<  "M" << " " << Ships_6_M.length() << ":" << " ";
    for (int i = 0; i < Ships_6_M.length(); i++){
        outputFile << Ships_6_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_6_R.length() << ":" << " ";
    for (int i = 0; i < Ships_6_R.length(); i++){
        outputFile << Ships_6_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "jul" << '\n';
    outputFile <<  "M" << " " << Ships_7_M.length() << ":" << " ";
    for (int i = 0; i < Ships_7_M.length(); i++){
        outputFile << Ships_7_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_7_R.length() << ":" << " ";
    for (int i = 0; i < Ships_7_R.length(); i++){
        outputFile << Ships_7_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "aug" << '\n';
    outputFile <<  "M" << " " << Ships_8_M.length() << ":" << " ";
    for (int i = 0; i < Ships_8_M.length(); i++){
        outputFile << Ships_8_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_8_R.length() << ":" << " ";
    for (int i = 0; i < Ships_8_R.length(); i++){
        outputFile << Ships_8_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "sep" << '\n';
    outputFile <<  "M" << " " << Ships_9_M.length() << ":" << " ";
    for (int i = 0; i < Ships_9_M.length(); i++){
        outputFile << Ships_9_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_9_R.length() << ":" << " ";
    for (int i = 0; i < Ships_9_R.length(); i++){
        outputFile << Ships_9_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "oct" << '\n';
    outputFile <<  "M" << " " << Ships_10_M.length() << ":" << " ";
    for (int i = 0; i < Ships_10_M.length(); i++){
        outputFile << Ships_10_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_10_R.length() << ":" << " ";
    for (int i = 0; i < Ships_10_R.length(); i++){
        outputFile << Ships_10_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "nov" << '\n';
    outputFile <<  "M" << " " << Ships_11_M.length() << ":" << " ";
    for (int i = 0; i < Ships_11_M.length(); i++){
        outputFile << Ships_11_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_11_R.length() << ":" << " ";
    for (int i = 0; i < Ships_11_R.length(); i++){
        outputFile << Ships_11_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    outputFile << "dec" << '\n';
    outputFile <<  "M" << " " << Ships_12_M.length() << ":" << " ";
    for (int i = 0; i < Ships_12_M.length(); i++){
        outputFile << Ships_12_M.get(i).UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "R" << " " << Ships_12_R.length() << ":" << " ";
    for (int i = 0; i < Ships_12_R.length(); i++){
        outputFile << Ships_12_R.get(i).UBI << " ";
    }
    outputFile << '\n';

    inputFile.close();
    outputFile.close();

	return 0;
}

string int2month(int month_int){
    if(month_int == 1){
        return "jan";
    }
    else if(month_int == 2){
        return "feb";
    }
    else if(month_int == 3){
        return "mar";
    }
    else if(month_int == 4){
        return "apr";
    }
    else if(month_int == 5){
        return "may";
    }
    else if(month_int == 6){
        return "jun";
    }
    else if(month_int == 7){
        return "jul";
    }
    else if(month_int == 8){
        return "aug";
    }
    else if(month_int == 9){
        return "sep";
    }
    else if(month_int == 10){
        return "oct";
    }
    else if(month_int == 11){
        return "nov";
    }
    else if(month_int == 12){
        return "dec";
    }

    return 0;
}

