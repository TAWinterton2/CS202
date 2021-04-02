#pragma once
#include "Box.h"
class FilledBox : public Box
{
public:

	//default constructor 
	FilledBox();

	//constructor w/ width and hieght
	FilledBox(int width, int hieght);

	//return type of box
	void type(FilledBox box);

private:
	int _width;
	int _hieght;

};

