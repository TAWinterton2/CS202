#pragma once
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;


using std::ofstream;
using std::ifstream;
using std::ios;
using std::fstream;

#ifndef MY_READ_WRITE_H
#define MY_READ_WRITE_H


//template for myWrite
template <typename T>
T myWrite(ofstream & f, T t) {
	f.write(reinterpret_cast<const char *> (&t), sizeof(t));
	f.close();
	return 0;
}

//template specializations for myWrite 
int myWrite(ofstream& f, const int t) {
	f.write(reinterpret_cast<const char*> (&t), sizeof(int));
	f.close();
	return 0;

}

double myWrite(ofstream& f, const double t) {
	f.write(reinterpret_cast<const char*> (&t), sizeof(double));
	f.close();
	return 0;
}




//template for myRead
template <typename T>
T myRead(ifstream &f, T t) {
	f.read(reinterpret_cast<char*>(&t), sizeof(t));
	f.close();
	return t;
}

//template specializatoins for myRead
int myRead(ifstream& f, int t) {
	f.read(reinterpret_cast<char*>(&t), sizeof(int));
	f.close();
	return t;
}

double myRead(ifstream& f, double t) {
	
	f.read(reinterpret_cast<char*>(&t), sizeof(double));
	f.close();
	return t;
}






#endif
