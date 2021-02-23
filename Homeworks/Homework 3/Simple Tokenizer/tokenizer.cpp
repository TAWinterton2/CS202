#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include"tokenizer.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


//return true if it read the string and false if the string was a blank line 
bool Readline(string str) {
	getline(cin, str);

	if (str.empty()) {
		return false;
	}
	else {
		return true;
	}
}




