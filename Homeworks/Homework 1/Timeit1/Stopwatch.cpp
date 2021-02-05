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
}


//copy constructor
Stopwatch::Stopwatch(const Stopwatch& old):t_start(old.t_start), t_end(old.t_end){

}


//destructor 
Stopwatch::~Stopwatch() {
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
	auto diff = t_end - t_start;
	cout << std::chrono::duration<double>(diff).count();
	std::time_t end_time = std::chrono::system_clock::to_time_t(t_end);
	cout << "Finished computation at " << std::ctime(&end_time) << '\n';
	cout << "Elapsed time: " << diff.count() << "s\n";
}

//Time_Milliseconds (Calculates total time elapsed in Miliseconds)

void Stopwatch::Time_Milliseconds(){
	auto diff = t_end - t_start;
	cout << std::chrono::duration<double, std::milli>(diff).count();
}

