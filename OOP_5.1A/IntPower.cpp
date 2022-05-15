#include "IntPower.h"

void IntPower::set_first(double value)
{

	try {
		first = value;

		if (value == 0.0) {
			throw exception();
		}
	}
	catch (exception) {
		cout << "exception" << endl;
	}
	try {
		first = value;
		if (value == 0) {
			throw Ex_std();
		}
	}
	catch (Ex_std&) {
		cout << "Ex_std" << endl;
	}
	try {
		first = value;
		if (value == 0) {
			throw new Exept();
		}
	}
	catch (Exept*) {
		cout << "Exept" << endl;
	}
}

void IntPower::read() {
	do {
		cout << "first = "; cin >> first;
		cout << "second = "; cin >> second;
		if (!(first == 0.0)) {
			cout << "\'first\' is incorrect.\n Enter again:" << endl;
		}
	} while (!first == 0.0);
}

void IntPower::display() {
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

double IntPower::power() {
	if (first != 0.0) {
		return pow(first, second);
	}
	else {
		return -1;
	}
}

IntPower::IntPower()
{
	first = 1;
	second = 0;
}

IntPower::IntPower(double f, int s) 
{
	try {
		first = f;
		second = s;
		if (f == 0.0) {
			throw bad_exception();
		}
	}
	catch (bad_exception) {
		cout << "bad_exception" << endl;
	}
	try {
		first = f;
		second = s;
		if (f == 0) {
			throw new invalid_argument("Error");
		}
	}
	catch (invalid_argument*) {
		cout << "invalid_argument" << endl;
	}
	try {
		first = f;
		second = s;
		if (f == 0) {
			throw Exept();
		}
	}
	catch (Exept&) {
		cout << "Exept" << endl;
	}
}

IntPower::IntPower(IntPower& a)
{
	second = a.second;
	first = a.first;
}

IntPower::~IntPower()
{ }

IntPower& IntPower::operator=(const IntPower& a)
{
	second = a.second;
	first = a.first;
	return *this;
}

IntPower::operator string() const
{
	stringstream ss;
	ss << " first = " << first << endl;
	ss << " second = " << second << endl;
	return ss.str();
}

IntPower& IntPower::operator++()
{
	first++;
	return *this;
	// TODO: вставьте здесь оператор return
}

IntPower& IntPower::operator--()
{
	first--;
	return *this;
	// TODO: вставьте здесь оператор return
}

IntPower IntPower::operator++(int)
{
	IntPower t(*this);
	second++;
	return t;
}

IntPower IntPower::operator--(int)
{
	IntPower t(*this);
	second--;
	return t;
}

ostream& operator<<(ostream& out, const IntPower& a)
{
	out << string(a);
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, IntPower& a)
{
	int s;
	cout << "first = ";
	in >> s;
	try {
		a.set_first(s);

		if (s == -1) {
			throw bad_exception();
		}
	}
	catch (bad_exception) {
		cout << "exception" << endl;
	}
	try {
		a.set_first(s);

		if (s == -1) {
			throw Ex_std();
		}
	}
	catch (Ex_std&) {
		cout << "Ex_std" << endl;
	}
	try {
		a.set_first(s);

		if (s == -1) {
			throw new Exept();
		}
	}
	catch (Exept*) {
		cout << "Exept" << endl;
	}


	cout << "second = "; in >> a.second;
	cout << endl;
	return in;
	// TODO: вставьте здесь оператор return
}

