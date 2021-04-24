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
	ofstream fout("testdoc.dat", ios::binary | ios::out);

	auto writex = 5.5;
	int readx;


	myWrite(fout, writex);

	

	return 0;
}


