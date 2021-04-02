#pragma once
#include "Box.h"
class FilledBox : public Box
{
public:

	using Box::Box;


	//default constructor 
	FilledBox();

	//constructor w/ width and hieght
	FilledBox(int width, int hieght);

	//return type of box
	void type(FilledBox box);


	//print function to print out box
	void print(ostream&);

private:
	

};

