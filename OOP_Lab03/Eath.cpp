#include"Eath.h"
#include "stdafx.h"
#include<iostream>

Eath::Eath()
{
	std::cout <<"����������� ������� � ������� "<<++key<<" ������" << std::endl;
};

Eath::~Eath()
{
	std::cout << "���������� ������� � ������� "<<key--<<" ������" << std::endl;
};