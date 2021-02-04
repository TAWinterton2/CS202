#pragma once
#ifndef STOPWATCH_HPP
#define STOPWATCH_HPP

#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<chrono>
#include<vector>

using std::endl;
using std::cout;
using std::string;
using std::vector;


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

	//Time_Seconds (Calculates total time elapsed in Seconds)
	void Time_Seconds();

	//Time_Milliseconds (Calculates total time elapsed in Miliseconds)

	void Time_Milliseconds();

private:
	
	std::chrono::time_point<std::chrono::system_clock> t_start, t_end;
	
};

#endif