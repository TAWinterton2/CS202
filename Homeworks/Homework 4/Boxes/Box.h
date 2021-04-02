#pragma once
class Box
{
public:
	//default constructor
	Box();

	//constructor w/ width and height
	Box(int width, int hieght);

	//accessor functions
	void getWidth(Box box);

	void getHieght(Box box);



private:
	int _width;

	int _hieght;


};

