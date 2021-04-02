#pragma once
#include<iostream>
#include<ostream>
using std::cout;
using std::ostream;

class Box
{

	friend ostream& operator << (ostream& out, const Box &box){

	}

public:
	//default constructor
	Box();

	

	//accessor functions
	void getWidth(Box box);

	void getHieght(Box box);

	//mutator functions 
	int setWidth(int width, Box box);
	int setHieght(int Height, Box box);


private:
	int _width;

	int _hieght;


};

