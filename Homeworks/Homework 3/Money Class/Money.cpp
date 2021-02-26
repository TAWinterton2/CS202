#include<iostream>
#include<iomanip>
#include "Money.h"



//default constructor
Wallet::Wallet(double amount) : _amount(amount) {
	std::cout << "New Wallet Created " << std::endl;
	std::cout << "Current Amount: " << _amount << std::endl;
}

//copy constructor
Wallet::Wallet(const Wallet& old) : _amount(old._amount) {

}

//destructor
Wallet::~Wallet() {
	std::cout << "Wallet Deleted" << std::endl;
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