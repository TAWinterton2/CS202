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