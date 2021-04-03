#include "CheckerdBox.h"




//default construsctor
CheckeredBox::CheckeredBox() : Box() {

}

//constructor w/ parameter
CheckeredBox::CheckeredBox(int width, int height) {
	setWidth(width);
	setHeight(height);
}