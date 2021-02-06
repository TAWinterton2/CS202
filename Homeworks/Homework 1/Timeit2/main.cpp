
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<chrono>
#include<vector>
#include<fstream>

#include"Stopwatch.h"


using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::fstream;
using std::ifstream;

int main() {
	std::string text;

	vector<string> booktxt;
	cout << "Reading in Beowulf.txt" << endl;
	cout << "Press enter to begin" << endl;
	while (cin.get() != '\n');

	ifstream Book("Beowulf.txt");

	if (!Book) {
		cout << "Error in opening file" << endl;
	}
	else {
		while (std::getline(Book, text)) {
			booktxt.push_back(text);
		}
	}


	


}