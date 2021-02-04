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


long fibonacci(unsigned n) {
	if (n < 2) return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
	Stopwatch timer_1;

	timer_1.Start();
	std::cout << "f(42) = " << fibonacci(42) << '\n';
	timer_1.Stop();

	cout << "Elapsed time (Seconds): ";
	timer_1.Time_Seconds();
	cout << endl;

	cout << "Elasped Time (Milliseconds): ";
	timer_1.Time_Milliseconds();
	cout << endl;

	return 0;

}