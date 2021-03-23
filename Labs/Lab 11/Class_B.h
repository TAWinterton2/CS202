#pragma once
#include<iostream>
#include"Class_A.h"
#include<string>

using std::string;

class Class_B : public Class_A
{
public:
	using Class_A::Class_A;

	//default constructor 
	Class_B() {
		std::cout << "Class_B created, derived from Class_A" << std::endl;
	}

	//Constructor w/ both variables
	Class_B(const string color, const int num) : Class_A(num), color(color) {
		std::cout << "Class_B created" << std::endl;
		std::cout << "Class_B color: " << color << std::endl;
		std::cout << "Class_B number " << num << "Derived form class_a" << std::endl;
	}

	//destructor
	~Class_B() {
		std::cout << "Class B destructed " << std::endl;
	}


private:
	string color;


};

