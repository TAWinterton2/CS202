#include "Box.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;





//default constructor 
Box::Box() {

}

//accessor functions
int Box::getWidth() {
	return(_width);
}
int Box::getHieght() {
	return(_hieght);
}

//Mutator functions
int Box::setWidth(int width ) {
	_width = width;
}
int Box::setHieght(int hieght) {
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