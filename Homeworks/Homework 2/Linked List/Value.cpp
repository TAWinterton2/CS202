#define CATCH_CONFIG_MAIN

#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"catch.hpp"

using std::string;
using std::iterator;
using std::list;
using std::cout;
using std::cin;
using std::endl;



struct Value {
	string booktitle;
	string author;
	string publicationdate;
};




//prints contents of linked list, starting w/ given node
void printlist(list <Value>& V) {

	list <Value>::iterator it;
	for (it = V.begin(); it != V.end(); ++it) {
		cout << '\t' << it->booktitle << endl;
		cout << '\t' << it->booktitle << endl;
		cout << "\t Publication date: " << it->publicationdate << endl;
		cout << endl;
	}

}

