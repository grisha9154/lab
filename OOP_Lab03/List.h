#pragma once
#include "Eath.h"
class List
{
protected:
	int lr = 0; //защищЄнна€ элемент

public:
	int qwe = 1;  //публичный элемент
	List();
	~List();
	void Insert(Eath *);
	Eath* head;
};

class List_Two :protected List
{
public:
	void show_how();                                                 // »спользование Ёлементов базового класса
};