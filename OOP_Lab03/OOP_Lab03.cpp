// OOP_Lab03.cpp : Defines the entry point for the console application.
//

/*�������� �������:
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

void static show_list(static Eath &head)       //����������� �������
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
	std::cout << "������� �������� ����" << std::endl;
	std::cin >> name;
	Base_OF_Name[0] = name;
	List list;

	Sea *First_object=new Sea();                                    // �������� ������� ������ Eath, ��� ��� ��� ������������
	First_object->get_name(Base_OF_Name[0]);							
	First_object->show_charector();									// ������ ��������� �������
	list.Insert(First_object);										// ���������� ������				

	Continent *Third_object=new Continent();                        //�������� ������� ������ Eath, ��� ��� ��� ������������
	Third_object->get_name(Base_OF_Name[0]);
	Third_object->get_square_of_continent(5);
	Third_object->show_charector();                                 // ������ ��������� �������
	list.Insert(Third_object);                                      // ���������� ������
	
	State* Fourth_object = new State();								//�������� ������� ������ Eath, ��� ��� ��� ������������
	Fourth_object->get_name(Base_OF_Name[0]);
	Fourth_object->get_square_of_continent(2);
	Fourth_object->get_size(8);
	Fourth_object->show_charector();								 // ������ ��������� �������
	list.Insert(Fourth_object);                                      // ���������� ������

	Island* Fifh_object=new Island();                                 //�������� ������� ������ Eath, ��� ��� ��� ������������
	Fifh_object->get_name(Base_OF_Name[0]);
	Fifh_object->get_square_of_continent(3);
	Fifh_object->show_charector();                                   // ������ ��������� �������
	list.Insert(Fifh_object);                                         // ���������� ������

	std::cout << "����� ������" << std::endl<<std::endl;
	show_list(*list.head);                                            // ����� ����������� ��������

	 Base Test(1, 2);                                                 // ������� �������� ����� � ��������� 1 , � ������� ���� ���������� � ���������� 2
	 Base::VL we(2);                                                  // ������� ������ ���������� ������
	 we.get_metod(Test);                                              // ����� ������ ������ �������� ������
	 Test.check_vl_value(we);                                         // ����� ������ ��� �������� ��������� ����������� ������

	List_Two* q=new List_Two();                                        // ������ ����� � ������� �������������
	q->show_how();                                                     // ����� ����������� ���������� �������� ������
//	int k = q.qwe;                                                     // ������!!! ��� ��� ������� qwe ����������

    return 0;
}

