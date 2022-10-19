// =================================================================
// File: ship.h
// Autores: 
//Marco Randu Retana Vargaa - A01709521
//Frida Bailleres González - A01708633
// Date: 18/11/2022
// =================================================================

#ifndef Ship_H
#define Ship_H
#include <iomanip>
#include <iostream>
#include <string>

class Ship{
	
	public:

		int min, h, d, mes, an;
		char input;
		std::string UBI;

		Ship(int, int, int, int, int, char, std::string);
		Ship();
		Ship(const Ship&);
		bool isOlderThan(const Ship&);

};

Ship::Ship(int d_, int mes_, int an_, int h_, int min_, char input_, std::string UBI_){

	d = d_;
	mes = mes_;
	an = an_;
	h = h_;
	min = min_;
	input = input_;
	UBI = UBI_;
}

Ship::Ship(){

	d = 0;
	mes = 0;
	an = 0;
	h = 0;
	min = 0;
	input = '0';
	UBI = "";

}

Ship::Ship(const Ship& right){

	d = right.d;
	mes = right.mes;
	an = right.an;
	h = right.h;
	min = right.min;
	input = right.input;
	UBI = right.UBI;

}


bool Ship::isOlderThan(const Ship& right){

	if(an != right.an)
			return an < right.an;
	else{
		if(mes != right.mes)
			return mes < right.mes;
		else{
			if(d != right.d)
				return d < right.d;
			else{
				if(h != right.h)
					return h < right.h;
				else{
					if(min != right.min)
						return min < right.min;
				}
			}
		}
	}
    return false;
}


#endif
