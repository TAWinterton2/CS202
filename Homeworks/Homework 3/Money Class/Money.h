#pragma once
#ifndef MONEY_HPP
#define MONEY_HPP

#include<iostream>
#include<iomanip>



class Wallet
{
	//default constructor 
	Wallet(double amount = 0.00);

	//copy constructor
	Wallet(const Wallet& old);

	//destructor 
	~Wallet();

private:
	double _amount;

};

#endif 