#include<iostream>
#include<list>
#include"Value.cpp"
#include"catch.hpp"
using std::list;
using std::cout;
using std::cin;
using std::endl;

list<Value> testlist;
list<Value>::iterator it;

struct Value {
	string booktitle;
	string author;
	int publicationdate = 0;
};


//prints contents of linked list, starting w/ given node
void printlist(list <Value>& V) {

	list <Value> ::iterator it;
	for (it = V.begin(); it != V.end(); ++it) {
		cout << '\t' << it->booktitle << endl;
		cout << '\t' << it->booktitle << endl;
		cout << "\t Publication date: " << it->publicationdate << endl;
		cout << endl;
	}

}
TEST_CASE("Queue: First in First out") {
	Value book1, book2;
	book1.booktitle = "The Hobbit";
	book1.author = "J.R Tolkien";
	book1.publicationdate = 1937;

	testlist.push_front(book1);

	book2.booktitle = "The Felloship of the Ring";
	book2.author = "J.R Tolkien";
	book2.publicationdate = 1943;

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