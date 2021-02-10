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
using std::mt19937;
using std::random_device;
using namespace std::chrono;

int main() {
	int user_input, vecsize;

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
	cout << "Enter in size of vector" << endl;
	cout << "1) 10 " << endl;
	cout << "2) 100 " << endl;
	cout << "3) 1k " << endl;
	cout << "4) 10k " << endl;
	cout << "5) 100k " << endl;
	cout << "6) 1M " << endl;
	cout << "7) 10M " << endl;
	cout << "8) 100M " << endl;
	cout << "9) 1B " << endl;
	cin >> user_input;
	switch (user_input) {
	case 1:
		vecsize = 10;
		break;
	case 2:
		vecsize = 100;
		break;
	case 3:
		vecsize = 1000;
		break;
	case 4:
		vecsize = 10000;
		break;
	case 5:
		vecsize = 10000;
		break;
	case 6:
		vecsize = 100000;
		break;
	case 7:
		vecsize = 10000000;
		break;
	case 8:
		vecsize = 100000000;
		break;
	case 9:
		vecsize = 1000000000;
		break;
	default:
		cout << "invalid option";
		return 0;
	}




	vector<int> data(vecsize);
	vector<int> data2(vecsize);
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
		cout << "Element " << numbertofind << " Exist in Vector." << endl;
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
		cout << "Element " << numbertofind << " Exist in Vector." << endl;
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