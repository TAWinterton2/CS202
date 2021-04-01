#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

//template for twice
template<typename X>
X twice(X x) {
	return x + x;
}

//template specilization for twice
string twice(const char* x) {
	string str(x);
	return str + str;
}


int main() {
	cout << twice(2) << endl;
	cout << twice(2.3) << endl;
	cout << twice("World") << endl;


	return 0;
}