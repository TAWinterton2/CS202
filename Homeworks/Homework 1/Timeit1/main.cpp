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
	//Declare and generate PRNGS and timers for each algorithm 
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
	vector<int> data2(10);
	std::generate(begin(data), end(data), gen);
	std::generate(begin(data2), end(data2), gen);


	int numbertofind = dist(mt);


	//Algorithm - Binary Search
	cout << "std::binary_search" << endl;
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
	while (cin.get() != '\n');
	cout << endl;

	//Algorithm - search
	cout << "std::search" << endl;
	cout << "Press Enter to begin " << endl;
	while (cin.get() != '\n');

	//iterator for std::search
	vector<int>::iterator it;

	timer.Start();
	it = std::search(data.begin(), data.end(), data2.begin(), data2.end());
	timer.Stop();

	if (it != data.end()) {
		cout << "Vector Data2 is present at " << (it - data.begin());
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;
	}
	else {
		cout << "Vector Data2 is not present in vector";
		cout << "Time taken: ";
		timer.Time_Seconds();
		cout << endl;
		timer.Time_Milliseconds();
		cout << endl;
	}
	while (cin.get() != '\n');
	cout << endl;
	
	//Algorithm - Count
	

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



	//Algorithm - Sort 
	cout << "std::Sort" << endl;
	cout << "Press Enter to Begin" << endl;
	timer.Start();
	std::sort(data.begin(), data.end());
	timer.Stop();
	cout << "Sorting Finished, Press enter to display times " << endl;
	while (cin.get() != '\n');

	cout << "Sorting completed" << endl;
	cout << "Time taken: ";
	timer.Time_Seconds();
	cout << endl;
	timer.Time_Milliseconds();
	cout << endl;
	
	while (cin.get() != '\n');
	
	

	return 0;

}