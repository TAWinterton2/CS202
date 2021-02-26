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
using std::istringstream;


//return true if it read the string and false if the string was a blank line 
bool Readline(string &str) {
	getline(cin, str);

	if (str.empty()) {
		return false;
	}
	else {
		return true;
	}
}


//uses std::istringstream to read strings seperated by whitespace charcters
//push a blank string to the end of each line, return # of tokens read from string
unsigned StringToTokens(const string& input, vector<string>& tokens) {
	istringstream token_check(input);
	string user_input;

	while (getline(token_check, user_input)) {
		tokens.push_back(user_input);
	}
	int a = tokens.size();
	return a;
}


//Analyze Tokens and Rpints out token and type
void AnalyzeTokens(vector<string> tokens) {
	for (auto a : tokens) {
		

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
				
			}
			else {
				is_string = false;
				break;
			}
		}

		//print out String Literals
		if (is_string) {
			cout << "String: " << a << endl;
			continue;
		}

		//Check for Identifier Literal
		bool is_identifi = true;

		for (int i = 0; i < a.size(); i++) {
			if (isalpha(a[i]) && a.length() == 1) {
				is_identifi = true;
			}
			else {
				is_identifi = false;
				break;

			}
		}

		//print out identifier tokens
		if (is_identifi) {
			cout << "Identifier: " << a << endl;
			continue;

		}


		  

	}
}






