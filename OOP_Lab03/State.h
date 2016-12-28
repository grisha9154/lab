#pragma once
#include "Continent.h"
class State:public Continent
{
	char Name_of_class[6] = "State";
	int size_of_people;
	class Gaverment                      //Объявление вложенного класса
	{
	public:
		Gaverment(char*);
		char *name_of_ministr;
		void show_out_metod(State &);
		~Gaverment();
	};   	
public:
	//State(char*);
	void get_size(int size_of_people);	 //Получение входных параметров
	void show_charector();				 //3 Лаба показ всех характеристик, которые есть в классе
	void show_function_base();           //Вызов функции базового класса
//	Gaverment VL_class;                  //Объявлеие объекта класса Gaverment
 };