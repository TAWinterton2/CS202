#pragma once
#include "Box.h"
class HollowBox : public Box
{
public:
	using Box::Box;


	//default constructor 
	HollowBox();

	//constructor
	HollowBox(int width, int height);

	//box type
	string type();

	//print 
	void print(ostream&);



};

