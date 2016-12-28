#pragma once
#include "Eath.h"
#include "Sea.h"
class Continent : virtual public Sea
{
	char Name_of_class[10] = "Continent";
	float square;
public:
	void get_square_of_continent(int square);
	void show_charector();
};