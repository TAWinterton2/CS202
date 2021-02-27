#include<iostream>
#include<ios>
#include<iomanip>
#include<cmath>
#include<numeric>
#include "Money.h"



//default constructor(s)
Money::Money(): _total(0.00) {

}

Money::Money(double total ) : _cents(0), _dollar(0), _total(total) {
	
}

Money::Money(int cents, int dollars) : _cents(cents * 0.01), _dollar(dollars), _total(_cents + _dollar) {
	

}


//copy constructor
Money::Money(const Money& old) : _total(old._total), _dollar(old._dollar), _cents(old._cents) {

}

//destructor
Money::~Money() {
	
}


//Outstream Operator
std::ostream& operator << (std::ostream& os, const Money& rhs) {
	if (rhs._total < 0) {
		return os << "-$" << std::setprecision(2) << std::fixed << fabs(rhs._total);
	}
	else {
		return os << "$" << std::setprecision(2) << std::fixed << rhs._total;
	}
	

}


//Arithmitic Operators 
//Overload Operators (+=)
Money& Money::operator+=(const Money& rhs) {
	_dollar += rhs._dollar;
	_cents += rhs._cents;
	_total = _dollar + _cents;

	return *this;

}

//Overload Operator (-=)
Money& Money::operator-=(const Money& rhs) {
	_dollar -= rhs._dollar;
	_cents += rhs._cents;
	_total = _dollar + _cents;

	return *this;
}

//Overload Operator (*=)
Money& Money::operator*=(const Money& rhs) {
	_dollar *= rhs._dollar;
	_total += _dollar;
	_cents *= rhs._cents * 0.01;
	_total += _dollar;

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

//Overload Operator (*) 
Money operator*(Money lhs, const Money& rhs) {
	return lhs *= rhs;
}

//Overload Operator(/)
Money operator /(Money lhs, const Money& rhs) {
	return lhs /= rhs;

}


//Bool opertor

//Bool operator(==)
bool operator == (const Money& lhs, const Money& rhs) {
	return lhs._total == rhs._total;
}

//Bool operator (<)
bool operator < (const Money& lhs, const Money& rhs) {
	return lhs._total < rhs._total;
}

//Bool operator (!=)
bool operator !=(const Money& lhs, const Money& rhs) {
	return !(rhs == lhs);
}

//Bool operator (>)
bool operator >(const Money& lhs, const Money& rhs) {
	return rhs<lhs;
}

//Bool operator (<=)
bool operator <=(const Money& lhs, const Money& rhs) {
	return !(rhs < lhs);
}

//Bool operator (>=)
bool operator >=(const Money& lhs, const Money& rhs) {
	return !(rhs > lhs);

}