#include "State.h"
#include "Continent.h"
#include "stdafx.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS


void State::get_size(int size_of_people)
{
	this->size_of_people = size_of_people;
};
void State::show_charector()
{
	Continent::show_charector();
	std::cout << "���������: " <<this->size_of_people<<std::endl;
};
void State::show_function_base()
{
	std::cout << "����� ������ �������� ������" << std::endl;
	Continent::show_charector();
};
State::Gaverment::Gaverment(char *name)                                //����������� ���������� ������
{
	name_of_ministr = name;
};
void State::Gaverment::show_out_metod(State &state)
{
	state.show_charector();
};
State::Gaverment::~Gaverment()                                          // ���������� �������� ������
{

};