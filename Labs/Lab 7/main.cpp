#include<iostream>
#include"Foo.h"

using std::cout;
using std::cin;
using std::ostream;






int main() {
	const Foo f(24);
	const Foo f2(10);
	const Foo f3 = f + f2;


	cout << f;
	cout << f3;

	return 0;
}

