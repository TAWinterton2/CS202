#include "Foo.h"

//set value for static variable
int Foo::static_var = 0;


//default constructor
Foo::Foo(int non_static_var) : non_static_var(non_static_var) {
	++static_var;
	std::cout << "New Foo Created, Current Foo objects " << static_var << std::endl;

}

//Destructor
Foo::~Foo() {
	static_var--;
	std::cout << "Foo destructed, Current Foo objects " << static_var << std::endl;
}


//ostream operator

ostream& operator << (ostream& os, const Foo& f) {
	return os << "The non static value of foo is " << f.non_static_var;
}

//set new value for Foo static variable
void Foo::set_stat_var(int value) {
	static_var = value;
}

//return static variable 
int Foo::return_stat_var() {
	return static_var;
}