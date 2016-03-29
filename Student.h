#ifndef STUDENT_H
#define STUDENT_H
#include "Human.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Protec_Tovar :public Tovar
{
	friend iostream& operator>>(iostream& is, Protec_Tovar & b)
	{
		string _name;
		int _price;
		is >> _name >> _price >> b.termin;
		b.setName(_name);
		b.setPrice(_price);
		return is;
	}

	friend ostream& operator <<(ostream & os, const Protec_Tovar & b)
	{
		os << b.getName() << " " << b.getPrice() << " " << b.termin << endl;
		return os;
	}

private:
	int termin;
public:
	Protec_Tovar();
	Protec_Tovar(string _name, int _price, int _termin);
	void setTermin(int _termin);
	int getTermin()const;
	virtual int perecinka(Tovar&);
	virtual void show();
	virtual void show1(ostream&);
	virtual void saveTo(ofstream & f);
};



#endif