#include "Complex.h"
#include<iostream>




//default constructor
Complex::Complex(double real , double imag): _real(real), _imaginary(imag) {

}



//destructor
Complex::~Complex() {

}


//copy
Complex::Complex(const Complex& old) : _real(old._real), _imaginary(old._imaginary) {

}


//outstream operator
 std::ostream&  operator << (std::ostream& os, const Complex& rhs) {
	 return os << rhs._real << '+' << rhs._imaginary << 'i';
}


 Complex operator+ (const Complex& rhs, const Complex& lhs) {
	 // (a + bi) + (c + di) = (a + c) + (bi + di) 

	 auto temp{ lhs };
	 temp += rhs;
	 return temp;
	
 }


 Complex & Complex::operator+=(const Complex& rhs) {
	 _imaginary += rhs._imaginary;
	 _real += rhs._real;
	 return *this;

}
