#include "Human.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



Tovar::Tovar()
{
	name = "";
	price = 0;
}
Tovar::Tovar(string _name, int _price)
{
	name.assign(_name);
	price = _price;
}
void Tovar::setName(string _name)
{
	name.assign(_name);
}

string Tovar::getName()const
{
	return name;
}

void Tovar::setPrice(int _price)
{
	price = _price;
}
int Tovar::getPrice()const
{
	return price;
}
int Tovar::perecinka(Tovar& b)
{
	return this->price + 10;
}
void Tovar::show()
{
	cout << "Tovar: name-" << name << " price-" << price << endl;
}
void Tovar::show1(ostream& out)
{
	out << "Tovar: name-" << name << " price-" << price << endl;
}
void Tovar::saveTo(ofstream& f)
{
	f << name << price << endl;
}
