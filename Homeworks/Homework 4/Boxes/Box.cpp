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
void Box::getWidth(Box box) {
	cout << box._width << endl;
}
void Box::getHieght(Box box) {
	cout << box._hieght << endl;
}

//Mutator functions
int Box::setWidth(int width, Box box) {
	box._width = width;
}
int Box::setHieght(int hieght, Box box) {
	box._hieght = hieght;
}

//overloaded operators
ostream& operator<< (ostream& os, const Box& box) {
	box.print(os);
	return os;
}