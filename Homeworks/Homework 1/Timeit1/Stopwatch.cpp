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




//default constructor 
Stopwatch::Stopwatch() {
	cout << "Stopwatch created" << endl;
}


//copy constructor
Stopwatch::Stopwatch(const Stopwatch& old):t_start(old.t_start), t_end(old.t_end){

}


//destructor 
Stopwatch::~Stopwatch() {
	cout << "Stopwatch Deleted" << endl;
}


//Start method
void Stopwatch::Start() {
	t_start = std::chrono::system_clock::now();

}

//Stop method
void Stopwatch::Stop() {
	t_end = std::chrono::system_clock::now();
	
}

//Time_Seconds (Calculates total time elapsed in Seconds)
void Stopwatch::Time_Seconds(){
	std::chrono::duration<double> elapsed_seconds = t_end - t_start;
	
	auto Time_S = elapsed_seconds;

	cout << Time_S.count() << "Seconds \n";
}

//Time_Milliseconds (Calculates total time elapsed in Miliseconds)

void Stopwatch::Time_Milliseconds(){
	std::chrono::duration<double> elapsed_seconds = t_end - t_start;

	
	
	auto Time_MS = elapsed_seconds * 1000;

	cout << Time_MS.count() << "Milliseconds\n";
}

