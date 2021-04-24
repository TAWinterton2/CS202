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
T myWrite(ofstream file, T t) {
	file >> t;
	return("Contents Saved");
}

//template specalization
 int myWrite(ofstream file, int t) {
	 file.write(reinterpret_cast<const char*>(&t), sizeof(t));

}

 double myWriate(ofstream file, double t) {

 }


//template for myRead
template <typename T>
T myRead(T t, T t2) {

}






#endif
