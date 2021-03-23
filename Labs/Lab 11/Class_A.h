#pragma once


#include<iostream>
#include<string>


class Class_A
{
public:
	//default constructor 
	Class_A() {
		std::cout << "Class_A created" << std::endl;
	}

	//constructor w/ variable 
	Class_A( const int number) : some_number(number){
		std::cout << "Class_A created with number " << number << std::endl;
	}

	//destructor 
	~Class_A() {
		std::cout << "Class_A destructed" << std::endl;
	}

private:
	int some_number;


};

