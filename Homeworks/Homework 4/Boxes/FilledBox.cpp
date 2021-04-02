#include "FilledBox.h"
#include "Box.h"


//default constructor
FilledBox::FilledBox():_width(1), _hieght(1) {

}


//constructor
FilledBox::FilledBox(int width, int hieght) : _width(width), _hieght(hieght) {

}

//box type
void FilledBox::type(FilledBox box) {
	cout << "This is a Filled Box" << std::endl;
}

//