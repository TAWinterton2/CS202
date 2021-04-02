#include "FilledBox.h"
#include "Box.h"


//default constructor
FilledBox::FilledBox():Box(1), Box(1) {

}

//constructor
FilledBox::FilledBox(int width, int hieght) : _width(width), _hieght(hieght) {

}

//box type
void FilledBox::type(FilledBox box) {
	cout << "This is a Filled Box" << std::endl;
}

//print