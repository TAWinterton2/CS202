#include "FilledBox.h"
#include "Box.h"


//default constructor
FilledBox::FilledBox(): Box() {

}

//constructor
FilledBox::FilledBox(int width, int hieght)   {
	
}

//box type
string FilledBox::type() {
	cout << "This is a Filled Box" << std::endl;
}

//print
void FilledBox::print(ostream& ) {
	int x = getWidth();
	int y = getHieght();

	for (int a = 0; a <= y; a++)
		for (int b = 0; b <= x; a++)
			cout << "x";

}