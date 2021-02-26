#pragma once
#ifndef MONEY_HPP
#define MONEY_HPP

#include<iostream>
#include<iomanip>



class Money
{

	//Operator for (+)
	friend Money operator+ (const Money& rhs, const Money& lhs);

	//Operator for (-)
	friend Money operator- (const Money& rhs, const Money& lhs);

	//Operator for (*)
	//friend Wallet operator* (const Wallet& rhs, const Wallet& lhs);

	//Operator for outstream
	friend std::ostream& operator << (std::ostream&, const Money& rhs);

	
public:

	//default constructors, One that can set Wallet = to 0 and one that can take 2 integers, Dollars and cents
	Money(double total = 0.00);
	
	Money(int cents , int dollars  );
	

	//copy constructor
	Money(const Money& old);

	//destructor 
	~Money();


	//Overload Operators (+=)
	Money& operator +=(const Money& rhs);

	//Overload Operator (-=)
	Money& operator -=(const Money& rhs);

	//Overload Operator(*=)
	Money& operator *=(const Money& rhs);

	//Overload Operator(/=)
	Money& operator /= (const Money& rhs);






private:
	
	int _dollar;
	int _cents;

	double _total;
	

};

Money operator-(const Money& lhs, const Money& rhs);
Money operator *(const Money& lhs, const Money& rhs);
Money operator /(const Money& lhs, const Money& rhs);

#endif 