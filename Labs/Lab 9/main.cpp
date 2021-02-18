#include<iostream>
#include"Complex.h"


using std::cout;

using std::endl;

int main() {

	//test copmlex objects
	Complex test(1, 5);
	Complex test2(5, 11);

	//output test one
	cout << test << endl;

	//add 1 to test and output test
	cout << 1 + test << endl;

	//add 4 to test 2 and output test 2
	cout << 4 + test2 << endl;

	//ad 6 to test 2
	test2 += 6;

	//output test2
	cout << test2 << endl;

	//add and output test + test2
	cout << test + test2 << endl;


	return 0;
}


