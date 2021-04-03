#include "Box.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;





//default constructor 
 Box::Box(): _width(1), _hieght(1) {

}

//accessor functions
int Box::getWidth() {
	return(_width);
}
int Box::getHeight() {
	return(_hieght);
}

//Mutator functions
 int const Box::setWidth(int width ) {
	_width = width;
}
 int const Box::setHeight( int hieght) {
	_hieght = hieght;
}

//pure virtuals
void print(ostream& os){}
string type(){}


//overloaded operators
ostream& operator<< (ostream& os, const Box& box) {
	box.print(os);
	return os;
}


//factory functions 
