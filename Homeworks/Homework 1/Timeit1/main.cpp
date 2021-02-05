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

int gen() {
	random_device rd;
	mt19937 mt(rd()); //PRNG - unpredictable seed
	std::uniform_int_distribution<int> dist(0, 10); // range from 0 to 50 
	static int i = dist(mt);
	return i;
}



int main() {
	//Declare and generate PRNGS and timers for each search algorithm
	

	Stopwatch timer_1;
	Stopwatch timer_2;
	Stopwatch timer_3;
	Stopwatch timer_4;
	
	timer_2.Start();

	bool result;
	random_device rd;
	mt19937 mt(rd()); //PRNG - unpredictable seed
	std::uniform_int_distribution<int> dist(0, 10); // range from 0 to 50 

	//create vector of 10 numbers 
	vector<int> data(10);
	
	int numbertofind = 5;
	std::generate(data.begin(), data.end(), gen);


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
		cout << "Element " << numbertofind << " Doesn't exist in vector. " << endl;
		cout << "Time taken: ";
		timer_1.Time_Seconds();
		cout << endl;
		timer_1.Time_Milliseconds();
		cout << endl;
	}


	//Search

	while (cin.get() != '\n');
	
	timer_2.Stop();
	cout << "hey!" << endl;
	timer_2.Time_Seconds();


	return 0;

}