#include "Human.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


Protec_Tovar::Protec_Tovar() :Tovar()
{
	termin = 0;
}
Protec_Tovar::Protec_Tovar(string _name, int _price, int _termin) : Tovar(_name, _price)
{
	termin = _termin;
}
void Protec_Tovar::setTermin(int _termin)
{
	termin = _termin;
}
int Protec_Tovar::getTermin()const
{
	return termin;
}
int Protec_Tovar::perecinka(Tovar&)
{
	return this->getPrice()+15;
}
void Protec_Tovar::show()
{
	cout << "ProtecTovar: name-" << getName() << " price-" << getPrice() << " termin-" << termin << endl;
}
void Protec_Tovar::show1(ostream& out)
{
	Tovar::show1(out);
	out << termin << endl;
}
void Protec_Tovar::saveTo(ofstream & f)
{
	f << getName() << " " << getPrice() << " " << termin << endl;
}