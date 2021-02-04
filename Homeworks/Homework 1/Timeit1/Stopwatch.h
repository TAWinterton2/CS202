#pragma once
#ifndef STOPWATCH_HPP
#define STOPWATCH_HPP
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<vector>

using std::endl;
using std::cout;
using std::string;
using std::vector;
using namespace std::chrono;

class Stopwatch
{
public:
	//default constructor, calls stopwatch when created
	Stopwatch();

	//Destructor
	~Stopwatch();

	//copy constructor
	Stopwatch(const Stopwatch& old);

	//Start (Starts and Resets Stopwatch)
	void Start();

	//End (Ends stopwatch)
	void Stop();

private:
	double Time_S, Time_MS;
	
	
};

#endif