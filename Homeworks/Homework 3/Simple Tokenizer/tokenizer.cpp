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


//uses std::istringstream to read strings separated by whitespace characters
// push a blank string at the end of each line. Return # of tokens read from string
unsigned StringToTokens(const string& input, vector<string>& tokens) {
	for (auto a : tokens) {
		cout << ' < ' << a << ' > ' << endl;

		//check for whitespace
		if (a.size() == 0) {
			cout << "whitespace " << endl;
			continue;
		}

		//check to see token is an integer literal
		bool is_int = true;
		for (int i = 0; i < a.size(); i++) {
			if (isdigit(a[i])) {
				is_int = true;
			}
			else {
				is_int = false;
				continue;
			}
		}

		//print out integer literal 
		if (is_int) {
			cout << "integer: " << a << endl;
			continue;
		}

		//Check for String literal 
		bool is_string = true;
		for (int i = 0; i < a.size(); i++) {
			if (a.find(a) != string::npos && a.length() > 1) {
				is_string = true;
				continue;
			}
			else {
				is_string = false;
				continue;
			}
		}

		//print out all tokens of the vector 
		if (is_string) {
			cout << "String: " << a << endl;
			continue;
		}



		  

	}
}




