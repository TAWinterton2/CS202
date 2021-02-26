#pragma once
#ifndef MONEY_HPP
#define MONEY_HPP

#include<iostream>
#include<iomanip>



class Wallet
{
	//default constructors, One that can set Wallet = to 0 and one that can take 2 integers, Dollars and cents
	Wallet(double amount = 0.00);
	Wallet(double amount);
	Wallet(int _dollar, int _cents);
	

	//copy constructor
	Wallet(const Wallet& old);

	//destructor 
	~Wallet();


	//Overload Operators (+=)
	Wallet& operator +=(const Wallet& rhs);

	//Overload Operator (-=_
	Wallet& operator -=(const Wallet& rhs);





private:
	double _amount;

	int _dollar;
	int _cents;


};

#endif 