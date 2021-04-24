#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>
#include "myreadwrite.h"

using std::cout;
using std::cin;
using std::string;


using std::ofstream;
using std::ifstream;
using std::ios;
using std::fstream;

int main() {


	ofstream ofile("numbers.dat");
	double d = 13.3;
	myWrite(ofile, d);
	int x = 5;
	myWrite(ofile, x);


	ifstream ifile("numbers.dat");
	double readd = 0;
	int readx = 0;

	cout << myRead(ifile, readd);

	cout << std::endl;

	cout << myRead(ifile, readx);

	

	return 0;
}


