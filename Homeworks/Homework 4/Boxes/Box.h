#pragma once
#include<iostream>
#include<ostream>
#include<string>

using std::cout;
using std::ostream;
using std::string;

class Box
{

	friend ostream& operator << (ostream& out, const Box& box);

public:
	//default constructor
	const Box();

	//accessor functions
	int getWidth();

	int getHeight();

	//mutator functions 
	 int const setWidth( int width);
	 int const setHeight( int Height);

	//pure virtuals 
	virtual void print(ostream& os);
	virtual string type();


private:
	int _width;
	int _hieght;


};

