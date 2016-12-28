#include "List.h"
#include "stdafx.h"
#include <iostream>

void List::Insert(Eath * eath)
{
	static Eath *r;
	r = head;
	head = eath;
	eath->next = r;
}
List::List()
{
	std::cout << "Создали список" << std::endl;
	head = 0x00;
};
List::~List()
{
	Eath *r;
	while (head)
	{
		r = head;
		head = head->next;
		delete r;
	}
}
void List_Two::show_how()                                      //Работа с элементами базового класса
{
	std::cout << qwe;
	std::cout << lr;
}
