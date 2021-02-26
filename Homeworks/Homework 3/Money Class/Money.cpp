#include<iostream>
#include<iomanip>
#include "Money.h"



//default constructor(s)
Money::Money(double amount) : _amount(amount) {
	std::cout << "New Wallet Created " << std::endl;
	std::cout << "Current Amount: " << _amount << std::endl;
}
Money::Money(double amount){

}

Money::Money(int dollar, int cents) : _dollar(dollar), _cents(cents) {

}
//copy constructor
Money::Money(const Money& old) : _amount(old._amount) {

}

//destructor
Money::~Money() {
	std::cout << "Wallet Deleted" << std::endl;
}


//Outstream Operator
std::ostream& operator << (std::ostream& os, const Money& rhs) {
	return os << rhs._amount << std::endl;

}

//Overload Operators (+=)
Money& Money::operator+=(const Money& rhs) {
	_dollar += rhs._dollar;
	_cents += rhs._cents;
	return *this;

}

//Overload Operator (-=)
Money& Money::operator-=(const Money& rhs) {
	_dollar -= rhs._dollar;
	_cents += rhs._cents;
	return *this;
}

//Overload Operator (*=)
Money& Money::operator*=(const Money& rhs) {
	_dollar *= rhs._dollar;
	_cents *= rhs._cents;

	return *this;
}

//Overload Operator (/=)
Money& Money::operator /= (const Money& rhs) {
	_dollar = rhs._dollar;
	_cents = rhs._cents;

	return *this;
}

//Overload Operator (+) 

Money operator+ (const Money& rhs, const Money& lhs) {
	auto temp{ lhs };
	temp += rhs;
	return temp;
}

//Overload Operator (-)
Money operator- (const Money& rhs, const Money& lhs) {
	auto temp{ lhs };
	temp -= rhs;
	return temp;

}


