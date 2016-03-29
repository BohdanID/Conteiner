#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Tovar
{
	friend istream &operator>> (istream& is, Tovar & b)
	{
		is >> b.name >> b.price;
		return is;
	}

	friend ostream &operator<< (ostream& os, Tovar * b)
	{
		//os << b.name <<" "<< b.price<<endl;
		b->show();
		return os;
	}

private:
	string name;
	int price;
public:
	Tovar();
	Tovar(string _name, int _price);
	void setName(string _name);
	string getName()const;
	void setPrice(int _price);
	int getPrice()const;
	virtual int perecinka(Tovar&);
	virtual void show();
	virtual void show1(ostream&);
	virtual void saveTo(ofstream& f);
};


#endif