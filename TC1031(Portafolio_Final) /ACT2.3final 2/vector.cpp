#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stdint.h>

#include "ship.h"
#include "sort.h"

using namespace std;

string int2month(int month_int);

int main(int argc, char* argv[]) {
	ifstream inputFile;
	inputFile.open("input1.txt");
    ofstream outputFile;
    outputFile.open("my_output1.txt");

	int N, min, h, dia, mes, anio;
	std::string find, date, time, UBI;
	char input;

	inputFile >> N >> find;

	vector <Ship> Ships(N);

	for(int i = 0; i < N; i++){
		inputFile >> date >> time >> input >> UBI;

       	dia = (date[0]-'0')*10 + (date[1]-'0');
        mes = (date[3]-'0')*10 + (date[4]-'0');
        anio = (date[6]-'0')*10 + (date[7]-'0');

        h = (time[0]-'0')*10 + time[1]-'0';
     min = (time[3]-'0')*10 + time[4]-'0';

        Ships[i] = Ship(dia, mes, anio, h, min, input, UBI);
	}

	selectionSort(Ships);

    vector <Ship> Ships_1_R(0), Ships_1_M(0);
    vector <Ship> Ships_2_R(0), Ships_2_M(0);
    vector <Ship> Ships_3_R(0), Ships_3_M(0);
    vector <Ship> Ships_4_R(0), Ships_4_M(0);
    vector <Ship> Ships_5_R(0), Ships_5_M(0);
    vector <Ship> Ships_6_R(0), Ships_6_M(0);
    vector <Ship> Ships_7_R(0), Ships_7_M(0);
    vector <Ship> Ships_8_R(0), Ships_8_M(0);
    vector <Ship> Ships_9_R(0), Ships_9_M(0);
    vector <Ship> Ships_10_R(0), Ships_10_M(0);
    vector <Ship> Ships_11_R(0), Ships_11_M(0);
    vector <Ship> Ships_12_R(0), Ships_12_M(0);

    for (int i = 0; i < N; i++){
        std::string ubi = Ships[i].UBI;
        std ::string primeros_tres = ubi.substr(0, 3);
		if(primeros_tres == find){
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
    outputFile <<  "R" << " " << Ships_1_R.size() << ":" << " ";
    for (int i = 0; i < Ships_1_R.size(); i++){
        outputFile << Ships_1_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_1_M.size() << ":" << " ";
    for (int i = 0; i < Ships_1_M.size(); i++){
        outputFile << Ships_1_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "feb" << '\n';
    outputFile <<  "R" << " " << Ships_2_R.size() << ":" << " ";
    for (int i = 0; i < Ships_2_R.size(); i++){
        outputFile << Ships_2_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_2_M.size() << ":" << " ";
    for (int i = 0; i < Ships_2_M.size(); i++){
        outputFile << Ships_2_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "mar" << '\n';
    outputFile <<  "R" << " " << Ships_3_R.size() << ":" << " ";
    for (int i = 0; i < Ships_3_R.size(); i++){
        outputFile << Ships_3_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_3_M.size() << ":" << " ";
    for (int i = 0; i < Ships_3_M.size(); i++){
        outputFile << Ships_3_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "apr" << '\n';
    outputFile <<  "R" << " " << Ships_4_R.size() << ":" << " ";
    for (int i = 0; i < Ships_4_R.size(); i++){
        outputFile << Ships_4_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_4_M.size() << ":" << " ";
    for (int i = 0; i < Ships_4_M.size(); i++){
        outputFile << Ships_4_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "may" << '\n';
    outputFile <<  "R" << " " << Ships_5_R.size() << ":" << " ";
    for (int i = 0; i < Ships_5_R.size(); i++){
        outputFile << Ships_5_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_5_M.size() << ":" << " ";
    for (int i = 0; i < Ships_5_M.size(); i++){
        outputFile << Ships_5_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "jun" << '\n';
    outputFile <<  "R" << " " << Ships_6_R.size() << ":" << " ";
    for (int i = 0; i < Ships_6_R.size(); i++){
        outputFile << Ships_6_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_6_M.size() << ":" << " ";
    for (int i = 0; i < Ships_6_M.size(); i++){
        outputFile << Ships_6_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "jul" << '\n';
    outputFile <<  "R" << " " << Ships_7_R.size() << ":" << " ";
    for (int i = 0; i < Ships_7_R.size(); i++){
        outputFile << Ships_7_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_7_M.size() << ":" << " ";
    for (int i = 0; i < Ships_7_M.size(); i++){
        outputFile << Ships_7_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "aug" << '\n';
    outputFile <<  "R" << " " << Ships_8_R.size() << ":" << " ";
    for (int i = 0; i < Ships_8_R.size(); i++){
        outputFile << Ships_8_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_8_M.size() << ":" << " ";
    for (int i = 0; i < Ships_8_M.size(); i++){
        outputFile << Ships_8_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "sep" << '\n';
    outputFile <<  "R" << " " << Ships_9_R.size() << ":" << " ";
    for (int i = 0; i < Ships_9_R.size(); i++){
        outputFile << Ships_9_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_9_M.size() << ":" << " ";
    for (int i = 0; i < Ships_9_M.size(); i++){
        outputFile << Ships_9_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "oct" << '\n';
    outputFile <<  "R" << " " << Ships_10_R.size() << ":" << " ";
    for (int i = 0; i < Ships_10_R.size(); i++){
        outputFile << Ships_10_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_10_M.size() << ":" << " ";
    for (int i = 0; i < Ships_10_M.size(); i++){
        outputFile << Ships_10_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "nov" << '\n';
    outputFile <<  "R" << " " << Ships_11_R.size() << ":" << " ";
    for (int i = 0; i < Ships_11_R.size(); i++){
        outputFile << Ships_11_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_11_M.size() << ":" << " ";
    for (int i = 0; i < Ships_11_M.size(); i++){
        outputFile << Ships_11_M[i].UBI << " ";
    }
    outputFile << '\n';

    outputFile << "dec" << '\n';
    outputFile <<  "R" << " " << Ships_12_R.size() << ":" << " ";
    for (int i = 0; i < Ships_12_R.size(); i++){
        outputFile << Ships_12_R[i].UBI << " ";
    }
    outputFile << '\n';
    outputFile <<  "M" << " " << Ships_12_M.size() << ":" << " ";
    for (int i = 0; i < Ships_12_M.size(); i++){
        outputFile << Ships_12_M[i].UBI << " ";
    }
    outputFile << '\n';

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
}

