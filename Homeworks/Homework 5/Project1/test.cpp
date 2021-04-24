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

	int writex = 5;
	int readx;


	myWrite(fout, writex);

	ifstream  fin("testdoc.dat", ios::binary | ios::in);
	if (!fin) {
		cout << "Error finding file" << std::endl;
		return 0;
	}
	else
	{
		fin.read(reinterpret_cast<char*>(&readx), sizeof(int));
		cout << readx;
	}
	

	return 0;
}


