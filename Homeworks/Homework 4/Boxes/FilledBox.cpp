#include "FilledBox.h"
#include "Box.h"



//default constructor
FilledBox::FilledBox(): Box() {

}

//constructor
FilledBox::FilledBox(int width, int height)   {
	setWidth(width);
	setHeight(height);
}

//box type
string FilledBox::type() {
	return("This is a filled box");
}

//print
void FilledBox::print(ostream& ) {
	int x = getWidth();
	int y = getHeight();

	for (int a = 0; a <= y; a++)
		for (int b = 0; b <= x; a++)
			cout << "x";
		cout << std::endl;
		
}