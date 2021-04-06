#include<iostream>
#include<string>
#include"Wrap.h"

using std::cout;
using std::string;

int main() {
	Wrapper<int> w{ 2 };
	Wrapper<string>  s{ "Hello world!" };

	cout << w << " " << s << std::endl;
	return 0;
}