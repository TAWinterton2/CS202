#include "CheckerdBox.h"




//default construsctor
CheckeredBox::CheckeredBox() : Box() {

}

//constructor w/ parameter
CheckeredBox::CheckeredBox(int width, int height) {
	setWidth(width);
	setHeight(height);
}

//type
string CheckeredBox::type(){
	return("this is a checkered box");
}

//print 
void CheckeredBox::print(ostream&) {
	int x = getWidth();
	int y = getHeight();

	//place holder, change to print out proper box shape after ensureing
	//that initial inheritance tests works 
	for (int a = 0; a <= y; a++)
		for (int b = 0; b <= x; a++)
			cout << "x";
	cout << std::endl;
}
