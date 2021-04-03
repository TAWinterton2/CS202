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
	Box();

	//accessor functions
	int getWidth();

	int getHieght();

	//mutator functions 
	int setWidth(int width);
	int setHieght(int Height);

	//pure virtuals 
	virtual void print(ostream& os);
	virtual string type();


private:
	int _width;
	int _hieght;


};

