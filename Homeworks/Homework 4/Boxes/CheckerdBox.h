#pragma once
#include "Box.h"
class CheckeredBox : public Box
{
public:
	using Box::Box;

	//default constructor 
	CheckeredBox();

	//constructor w/ paramtersrs
	CheckeredBox(int width, int hieght);

	//box type
	string type();

	//print
	void print(ostream&);



};

