#include "Stopwatch.h"

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
using namespace std::chrono;



//default constructor 
Stopwatch::Stopwatch() {
	cout << "Stopwatch created" << endl;
}


//copy constructor
Stopwatch::Stopwatch(const Stopwatch& old): Time_S(old.Time_S), Time_MS(old.Time_MS), Elapsed(old.Elapsed), Start_time(old.Start_time), End_Time(old.End_Time) {

}


//destructor 
Stopwatch::~Stopwatch() {
	cout << "Stopwatch Deleted" << endl;
}


//Start method
void Stopwatch::Start() {
	auto start = std::chrono::high_resolution_clock::now();
}

//Stop method
void Stopwatch::Stop() {
	auto finish = std::chrono::high_resolution_clock::now();

}

//Time_Seconds (Calculates total time elapsed in Seconds)
void Time_Seconds(){

}

//Time_Milliseconds (Calculates total time elapsed in Miliseconds)

void Time_Milliseconds(){

}

