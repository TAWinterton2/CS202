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

	

	//Operator for outstream
	friend std::ostream& operator << (std::ostream&, const Money& rhs);

	//Operator for (==)
	friend bool operator== (const Money& lhs, const Money& rhs);

	//Operator for (<)
	friend bool operator <(const Money& lhs, const Money& rhs);


	
public:

	//default constructors, One that can set money = to 0 and one that can take 2 integers, Dollars and cents
	Money();
	
	Money(double total);
	
	Money(int cents, int dollars);
	

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
Money operator *( Money lhs, const Money& rhs);
Money operator /( Money lhs, const Money& rhs);

//bool operators
bool operator !=(const Money& lhs, const Money& rhs);
bool operator >=(const Money& lhs, const Money& rhs);
bool operator <=(const Money& lhs, const Money& rhs);
bool operator >(const Money& lhs, const Money& rhs);




#endif 