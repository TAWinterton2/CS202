#pragma once
#include<iostream>

using std::cout;
using std::cin;
using std::ostream;


class Foo {
	//ostream operator 
	friend ostream& operator << (ostream& os, const Foo& f);

public:

	Foo() {};
	~Foo() {};
	Foo(int x) : _x(x) {}

	//Overload operator+ 
	Foo operator + (Foo const &f) const {
		Foo foo;
		foo._x = _x + f._x;
		return foo;
	}

private:
	int _x;
};



