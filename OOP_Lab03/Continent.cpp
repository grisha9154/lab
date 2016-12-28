#include "stdafx.h"
#include "Continent.h"
#include <iostream>
void Continent::get_square_of_continent(int square)
{
	this->square = square;
};
void Continent::show_charector()
{
	Sea::show_charector();
	std::cout << "Площадь: "<<square<<std::endl;
}