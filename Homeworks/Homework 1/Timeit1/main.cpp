#include "Stopwatch.h"
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<chrono>
#include<vector>
#include<algorithm>
#include<random>



using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using namespace std::chrono;

using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;



int main() {
	//Declare and generate PRNGS and timers for each search algorithm


	Stopwatch timer_1;
	Stopwatch timer_2;
	Stopwatch timer_3;
	Stopwatch timer_4;

	random_device rd;

	bool result;

	mt19937 gen(rd()); //PRNG - unpredictable seed

	//create vector of 100 numbers 
	vector<int> data(10);

	std::generate(data.begin(), data.end(), []() {
		return rand() % 100; });

	int numbertofind = rand() % 100;

	//Binary_search
	cout << "Binary Search" << endl;
	cout << "Press Enter to begin " << endl;
	while (cin.get() != '\n');


	timer_1.Start();
	result = std::binary_search(data.begin(), data.end(), numbertofind);
	timer_1.Stop();
	cout << "Search Finished, Press enter to display times " << endl;
	while (cin.get() != '\n');

	if (result == true) {
		cout << "Element " << numbertofind << "Exist in Vector." << endl;
		cout << "Time taken: ";
		timer_1.Time_Seconds();
		cout << endl;
		timer_1.Time_Milliseconds();
		cout << endl;

	}
	if (result == false) {
		cout << "Element " << numbertofind << "Doesn't exist in vector. " << endl;
		cout << "Time taken: ";
		timer_1.Time_Seconds();
		cout << endl;
		timer_1.Time_Milliseconds();
		cout << endl;
	}

	while (cin.get() != '\n');
	


	return 0;

}