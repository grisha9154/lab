// OOP_Lab03.cpp : Defines the entry point for the console application.
//

/*Иерархия классов:
Eath
Sea
Continent
Island State*/


#include "stdafx.h"
#include"Base.h"
#include "Sea.h"
#include "Continent.h"
#include "Eath.h"
#include "State.h"
#include "Island.h"
#include "List.h"
#include <iostream>

void static show_list(static Eath &head)       //Статическая функция
{
	static Eath *r;
	r = &head;
	while (r)
	{
		r->show_charector();
		r = r->next;
	}
}

int main()
{
	char w = ' ';
	setlocale(LC_ALL, "rus");
	char *name = new char;
	char **Base_OF_Name = new char *[25] ;
	char * ministr = new char;
	std::cout << "Введите название моря" << std::endl;
	std::cin >> name;
	Base_OF_Name[0] = name;
	List list;

	Sea *First_object=new Sea();                                    // Создание объекта класса Eath, так как идёт наследование
	First_object->get_name(Base_OF_Name[0]);							
	First_object->show_charector();									// Работа внутриних функций
	list.Insert(First_object);										// Заполнеиеи списка				

	Continent *Third_object=new Continent();                        //Создание объекта класса Eath, так как идёт наследование
	Third_object->get_name(Base_OF_Name[0]);
	Third_object->get_square_of_continent(5);
	Third_object->show_charector();                                 // Работа внутриних функций
	list.Insert(Third_object);                                      // Заполнеиеи списка
	
	State* Fourth_object = new State();								//Создание объекта класса Eath, так как идёт наследование
	Fourth_object->get_name(Base_OF_Name[0]);
	Fourth_object->get_square_of_continent(2);
	Fourth_object->get_size(8);
	Fourth_object->show_charector();								 // Работа внутриних функций
	list.Insert(Fourth_object);                                      // Заполнеиеи списка

	Island* Fifh_object=new Island();                                 //Создание объекта класса Eath, так как идёт наследование
	Fifh_object->get_name(Base_OF_Name[0]);
	Fifh_object->get_square_of_continent(3);
	Fifh_object->show_charector();                                   // Работа внутриних функций
	list.Insert(Fifh_object);                                         // Заполнеиеи списка

	std::cout << "Вывод списка" << std::endl<<std::endl;
	show_list(*list.head);                                            // Вывод статической функциии

	 Base Test(1, 2);                                                 // Создали внешиний класс с параметро 1 , в котором есть внутренний с параметром 2
	 Base::VL we(2);                                                  // Создали объект вложенного класса
	 we.get_metod(Test);                                              // Метод вызова метода внешнего класса
	 Test.check_vl_value(we);                                         // Вызов метода для проверки параметра вложеннного класса

	List_Two* q=new List_Two();                                        // Создаём класс с протект наследованием
	q->show_how();                                                     // Может спользовать защищённые элементы класса
//	int k = q.qwe;                                                     // Ошибка!!! так как элемент qwe защищённый

    return 0;
}

