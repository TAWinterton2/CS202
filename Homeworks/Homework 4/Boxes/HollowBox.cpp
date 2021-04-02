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
HollowBox::HollowBox(int width, int height) {

}

//type function 
string HollowBox::type(HollowBox Box) {
	cout << "This is a HolowBox" << endl;
}