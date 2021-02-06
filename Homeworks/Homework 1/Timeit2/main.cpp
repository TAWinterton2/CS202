
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
using std::string;
using std::vector;
using std::fstream;
using std::ifstream;

int main() {
	std::string text;

	vector<string> book;

	ifstream Book("Beowulf.txt");

	if (!Book) {
		cout << "Error in opening file" << endl;
	}

	


}