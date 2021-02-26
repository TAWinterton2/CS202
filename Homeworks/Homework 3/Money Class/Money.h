#pragma once
#ifndef MONEY_HPP
#define MONEY_HPP

#include<iostream>
#include<iomanip>



class Money
{
	//default constructor 
	Money(double amount = 0.00);

	//copy constructor
	Money(const Money& old);

	//destructor 
	~Money();



};

#endif 