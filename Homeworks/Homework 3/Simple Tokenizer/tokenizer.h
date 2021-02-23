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
bool Readline(string& str);


//uses std::istringstream to read strings seperated by whitespace characets. 
// push a blank string to the end of each line. Return # of tokens read form the string
unsigned StringToTokens(const string& input, vector<string>& tokens);




#endif