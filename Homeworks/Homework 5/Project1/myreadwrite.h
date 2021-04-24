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
	return 0;
}

int myWrite(ofstream& f, int t) {
	f.write(reinterpret_cast<const char*> (&t), sizeof(t));
	return 0;
}

double myWrite(ofstream& f, double t) {
	f.write(reinterpret_cast<const char*> (&t), sizeof(double));
	return 0;
}




//template for myRead
template <typename T>
T myRead(ifstream f, T t) {

}






#endif
