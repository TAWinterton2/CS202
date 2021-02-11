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






//Test Queue for List (First in First out)
TEST_CASE("Queue: First in First out") {
	list<Value> testlist;

	Value book1, book2;
	book1.booktitle = "The Hobbit";
	book1.author = "J.R Tolkien";
	book1.publicationdate = "1937";

	testlist.push_back(book1);

	book2.booktitle = "The Felloship of the Ring";
	book2.author = "J.R Tolkien";
	book2.publicationdate = "1943";

	testlist.push_back(book2);
	
	REQUIRE(testlist.front().booktitle == book1.booktitle);







}
/*
TEST_CASE("Stack: Last in First out") {

}

TEST_CASE("INSERT AND FIND") {


}

TEST_CASE("Print out list") {
	
}*/