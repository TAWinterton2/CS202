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


int main() {
	//Declare and generate PRNGS and timers for each search algorithm
	
	Stopwatch timer;
	bool result;
	random_device rd;
	mt19937 mt{ rd() }; //PRNG - unpredictable seed
	std::uniform_int_distribution<int> dist(0, 5); // range from 0 to 5

	auto gen = [&dist, &mt]() {
		return dist(mt);
	};
	
	//Generate A vector of random numbers 
	cout << "Vector of 10 Elements" << endl;

	vector<int> data(10);
	std::generate(begin(data), end(data), gen);
	for (auto i : data) {
		cout << i << endl;
	}

	int numbertofind = dist(mt);


	//std::Binary_search
	cout << "Binary Search" << endl;
	cout << "Press Enter to begin " << endl;
	while (cin.get() != '\n');


	timer.Start();
	result = std::binary_search(data.begin(), data.end(), numbertofind);
	timer.Stop();


	cout << "Search Finished, Press enter to display times " << endl;
	while (cin.get() != '\n');

	if (result == true) {
		cout << "Element " << numbertofind << "Exist in Vector." << endl;
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;

	}
	if (result == false) {
		cout << "Element " << numbertofind << " Doesn't exist in vector. " << endl;
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;
	}

	
	
	//std::count 
	while (cin.get() != '\n');
	cout << endl;

	cout << "std::count" << endl;
	cout << "Press Enter to Begin" << endl;

	timer.Start();
	result = std::count(data.begin(), data.end(), numbertofind);
	timer.Stop();
	cout << "Search Finished, Press enter to display times " << endl;
	while (cin.get() != '\n');

	if (result == true) {
		cout << "Element " << numbertofind << "Exist in Vector." << endl;
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;

	}
	if (result == false) {
		cout << "Element " << numbertofind << " Doesn't exist in vector. " << endl;
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;
	}
	while (cin.get() != '\n');



	//Sorted vector
	cout << "Sorted" << endl;
	std::sort(data.begin(), data.end());
	timer.Start();
	result = std::binary_search(data.begin(), data.end(), numbertofind);
	timer.Stop();
	cout << "Search Finished, Press enter to display times " << endl;
	while (cin.get() != '\n');

	if (result == true) {
		cout << "Element " << numbertofind << "Exist in Vector." << endl;
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;

	}
	if (result == false) {
		cout << "Element " << numbertofind << " Doesn't exist in vector. " << endl;
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;
	}
	//Search
	

	while (cin.get() != '\n');
	
	

	return 0;

}