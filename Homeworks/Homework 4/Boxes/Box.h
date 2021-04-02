#pragma once
#include<iostream>
#include<ostream>
#include<string>

using std::cout;
using std::ostream;
using std::string;

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

	//pure virtuals
	virtual void print(ostream& os);
	virtual string type();


private:
	int _width;

	int _hieght;


};

