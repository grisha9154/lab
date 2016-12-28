#include"Eath.h"
#include "stdafx.h"
#include<iostream>

Eath::Eath()
{
	std::cout <<"Конструктор объекта с номером "<<++key<<" вызван" << std::endl;
};

Eath::~Eath()
{
	std::cout << "Деструктор объекта с номером "<<key--<<" вызван" << std::endl;
};