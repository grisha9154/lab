#include "stdafx.h"
#include "Sea.h"
#include <iostream>

void Sea::get_name(char *name)
{
	this->name = name;
};
void Sea::show_charector()
{
	std::cout << "Название: " <<this->name << std::endl;
};