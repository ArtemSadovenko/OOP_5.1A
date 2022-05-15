#pragma once
#include "Exept.h"

class IntPower
{
private:
	double first;
	int second;
public:
	double get_first() { return first; };
	int get_second() { return second; };

	void set_first(double value);
	void set_second(int value) { second = value; };

	void read();
	void display();

	double power();

	IntPower() ;
	IntPower(double f, int s) ;
	IntPower(IntPower& a);
	~IntPower();

	IntPower& operator = (const IntPower& a);
	operator string() const;

	friend ostream& operator << (ostream& out, const IntPower& a);
	friend istream& operator >> (istream& in, IntPower& a);
	IntPower& operator ++();
	IntPower& operator --();
	IntPower operator ++(int);
	IntPower operator --(int);
};


