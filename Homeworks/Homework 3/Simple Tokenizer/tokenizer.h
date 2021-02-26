#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

#ifndef FILE_TOKENIZER_H
#define FILE_TOKENIZER_H

//uses getline() to get in text from user or txt file
//return true if the read the string and false if the string was a blank line 
bool Readline(string &str);


//uses std::istringstream to read strings seperated by whitespace characters
// push a blank string to the end of each line. Return # of tokens read form the string
unsigned StringToTokens(const string& input, vector<string>& tokens);

//takes a vector and determines if the toke is :
	// an interger literal (all characters are numbers)
	// an identifier literal (starts w/ a letter of underscore character and followed by A-Z, a-z, 0-9)
	// a string literal (starts and ends with double quotes)
	// a white space literal (blank string)
	// an unkown ( undetermined from the input)
// also prints out the token itself surrounded by quotation marks.
void AnalyzeTokens(vector<string> tokens);





#endif