#pragma once
#include "Eath.h"
class List
{
protected:
	int lr = 0; //���������� �������

public:
	int qwe = 1;  //��������� �������
	List();
	~List();
	void Insert(Eath *);
	Eath* head;
};

class List_Two :protected List
{
public:
	void show_how();                                                 // ������������� ��������� �������� ������
};