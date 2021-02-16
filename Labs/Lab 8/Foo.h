#pragma once
#include<iostream>
using std::ostream;

class Foo
{
	friend ostream& operator<<(ostream& os, const Foo& f);
public:
	//Default Constructor
	Foo(int non_static_var);

	//destructor
	~Foo();

	//set value for static variable
	static void set_stat_var(int value);

	//print satic varialbe
	static int return_stat_var();

private:
	int non_static_var;
	static int static_var;



};

