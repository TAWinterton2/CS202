#include "FilledBox.h"
#include "Box.h"


//default constructor
FilledBox::FilledBox(): Box() {

}

//constructor
FilledBox::FilledBox(int width, int hieght)   {
	
}

//box type
string FilledBox::type(FilledBox box) {
	cout << "This is a Filled Box" << std::endl;
}

//print
void FilledBox::print(ostream& image) {

}