#pragma once
#ifndef MONEY_HPP
#define MONEY_HPP

#include<iostream>
#include<iomanip>



class Wallet
{
	//default constructors, One that can set Wallet = to 0 and one that can take 2 integers, Dollars and cents
	Wallet(double amount = 0.00);
	Wallet(int _dollar, int _cents);


	//copy constructor
	Wallet(const Wallet& old);

	//destructor 
	~Wallet();

private:
	double _amount;

	int _dollar;
	int _cents;
};

#endif 