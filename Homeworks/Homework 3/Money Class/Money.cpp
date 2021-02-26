#include<iostream>
#include<iomanip>
#include "Money.h"



//default constructor(s)
Wallet::Wallet(double amount) : _amount(amount) {
	std::cout << "New Wallet Created " << std::endl;
	std::cout << "Current Amount: " << _amount << std::endl;
}
Wallet::Wallet(double amount){

}

Wallet::Wallet(int dollar, int cents) : _dollar(dollar), _cents(cents) {

}
//copy constructor
Wallet::Wallet(const Wallet& old) : _amount(old._amount) {

}

//destructor
Wallet::~Wallet() {
	std::cout << "Wallet Deleted" << std::endl;
}


//Outstream Operator
std::ostream& operator << (std::ostream& os, const Wallet& rhs) {
	return os << rhs._amount << std::endl;

}

//Overload Operators (+=)
Wallet& Wallet::operator+=(const Wallet& rhs) {
	_dollar += rhs._dollar;
	_cents += rhs._cents;
	return *this;

}

//Overload Operator (-=)
Wallet& Wallet::operator-=(const Wallet& rhs) {
	_dollar -= rhs._dollar;
	_cents += rhs._cents;
	return *this;
}

//Overload Operator (*=)
Wallet& Wallet::operator*=(const Wallet& rhs) {
	_dollar *= rhs._dollar;
	_cents *= rhs._cents;

	return *this;
}

//Overload Operator (/=)
Wallet& Wallet:: operator /= (const Wallet& rhs) {
	_dollar = rhs._dollar;
	_cents = rhs._cents;

	return *this;
}

//Overload Operator (+) 

Wallet operator+ (const Wallet& rhs, const Wallet& lhs) {
	auto temp{ lhs };
	temp += rhs;
	return temp;
}

//Overload Operator (-)
Wallet operator- (const Wallet& rhs, const Wallet& lhs) {
	auto temp{ lhs };
	temp -= rhs;
	return temp;

}


