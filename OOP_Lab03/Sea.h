#pragma once
#include "Eath.h"

class Sea:public Eath
{
	char Name_of_class[4] = "Sea";
	char *name;
public:
	void get_name(char *name);
	void show_charector();
};