#include "FilledBox.h"
#include "Box.h"


//default constructor
FilledBox::FilledBox():Box(setWidth(1), setHieght(1)) {

}

//constructor
FilledBox::FilledBox(int width, int hieght)   {
	
}

//box type
void FilledBox::type(FilledBox box) {
	cout << "This is a Filled Box" << std::endl;
}

//print
void FilledBox::print(ostream& image) {

}