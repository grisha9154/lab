#include "stdafx.h"
#include "Base.h"



Base::VL::VL(int k)                                   // ����������� ����������� ������ � ���������� k
{
	per = k;                 
};

Base::Base(int k,int q)                               // ����������� �������� ������ � ����������� k(��� ����������� �������� b=value),l(��� ���������� ������ ������������ ����������� ������)
{
	value = k;
	VL::VL(q);
};
void Base::VL::get_metod(Base &q)                     // ����� ����������� ������ ��� ������ ������ ��������. ������� ������ �� ������� �����.
{
	q.show();
};
void Base::show()                                      // ����� �������� ������. �������� � ��� ��� ��� �������.
{
	std::cout << "������� ����� SHOW";
};
void Base::check_vl_value(VL&q)                         // ����� �������� ������ �������, ��������� �������� ����������� ������. ���������� ��������� ���� �� ���������� �����
{
	std::cout << q->per;
};