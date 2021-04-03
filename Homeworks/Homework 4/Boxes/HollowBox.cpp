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
void HollowBox::print(ostream&) {
	int x = getWidth();
	int y = getHeight();

	//place holder, change to print out proper box shape after ensureing
	//that initial inheritance tests works 
	for (int a = 0; a <= y; a++)
		for (int b = 0; b <= x; a++)
			cout << "x";
	cout << std::endl;
}
