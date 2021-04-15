#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

template <typename Iterator>
void printReversed(Iterator thebegin, Iterator theEnd) {
	cout << *--theEnd << ' ';
	if (theEnd == thebegin) 
		return;
	printReversed(thebegin, theEnd);
}

int main() {
	string s("Hello World!");
	printReversed(begin(s), end(s));
	cout << "\n";
	vector<int> primes{ 2,3,5,7,11,13,17 };
	printReversed(begin(primes), end(primes));
	cout << "\n";
	return 0;
}
