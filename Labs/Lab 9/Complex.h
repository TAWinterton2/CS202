#pragma once
#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include<iostream>
#include<string>

using std::string;

class Complex
{
	//operator for outstream
	friend std::ostream& operator << (std::ostream&, const Complex & rhs);
	//operator for +
	friend Complex operator+ (const Complex& rhs, const Complex& lhs);

public:
	//default
	Complex(double real, double imag = 0);


	//copy
	Complex(const Complex &old);
	//destructor
	~Complex();

	//+=
	Complex & operator+=(const Complex& rhs);

	

private:

	double _real;
	double _imaginary;
};


#endif
