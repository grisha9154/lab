#pragma once
#include "Continent.h"
class State:public Continent
{
	char Name_of_class[6] = "State";
	int size_of_people;
	class Gaverment                      //���������� ���������� ������
	{
	public:
		Gaverment(char*);
		char *name_of_ministr;
		void show_out_metod(State &);
		~Gaverment();
	};   	
public:
	//State(char*);
	void get_size(int size_of_people);	 //��������� ������� ����������
	void show_charector();				 //3 ���� ����� ���� �������������, ������� ���� � ������
	void show_function_base();           //����� ������� �������� ������
//	Gaverment VL_class;                  //��������� ������� ������ Gaverment
 };