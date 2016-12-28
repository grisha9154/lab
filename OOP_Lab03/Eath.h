#pragma once

class Eath
{
public:
	Eath* next;
	Eath();
	virtual void get_name(char *)=0;
	virtual void show_charector(void)=0;
	virtual ~Eath();
	friend class List;
};