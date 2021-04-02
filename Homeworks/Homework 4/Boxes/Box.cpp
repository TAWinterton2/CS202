#include "Box.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;





//default constructor 
Box::Box() {

}

//constructor w/ width and hieght
Box::Box(int width, int hieght) : _width(width), _hieght(hieght) {

}

//accessor functions
void Box::getWidth(Box box) {
	cout << box._width << endl;
}

void Box::getHieght(Box box) {
	cout << box._hieght << endl;
}