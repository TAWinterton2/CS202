#include "HollowBox.h"
#include "Box.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;


//default constructor
HollowBox::HollowBox() : Box(){

}


//constructor w/ parameters
HollowBox::HollowBox(int width, int height)  {
	setWidth(width);
	setHeight(height);
}

//type function 
string HollowBox::type() {
	return("This is a hollow box");
}

//print
