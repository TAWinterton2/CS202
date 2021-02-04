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
Stopwatch::Stopwatch(const Stopwatch& old) {

}


//destructor 
Stopwatch::~Stopwatch() {

}

//Start method
void Stopwatch::Start() {
	auto start = std::chrono::high_resolution_clock::now();
}

//Stop method
void Stopwatch::Stop() {

}


