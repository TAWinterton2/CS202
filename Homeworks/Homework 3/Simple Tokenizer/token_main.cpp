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


int main(int argc, char** argv) {
	string user_input;
	vector <string> tokens;

	//get input from user or text file
	cout << "Enter in some text. When you are done, type 'End', 'end' or 'END' ";
	cout << "\n";

	do {
		//if user inputed a string, add to vector 'tokens'
		if (Readline(user_input) == true) {
			StringToTokens(user_input, tokens);
		}
		//transform user input to all lowercase letters and checks if user typed 'end'
		transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);
	} while (user_input != "end");
	

	//print out results
	cout << "\n";
	for (auto a : tokens) {
		cout << a << endl;
	}
	AnalyzeTokens(tokens);
	return 0;

}