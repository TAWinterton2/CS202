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






//Testcase for Queueing with list (First in First out)
TEST_CASE("Queue: First in First out") {
	list<Value> testlist;

	Value book1, book2;
	book1.booktitle = "The Hobbit";
	book1.author = "J.R Tolkien";
	book1.publicationdate = "1937";


	testlist.push_back(book1);

	book2.booktitle = "The Fellowship of the Ring";
	book2.author = "J.R Tolkien";
	book2.publicationdate = "1943";

	testlist.push_back(book2);
	
	//Test to see that first element of testlist is The hobbit
	REQUIRE(testlist.front().booktitle == book1.booktitle);
	REQUIRE(testlist.front().author == book1.author);
	REQUIRE(testlist.front().publicationdate == book1.publicationdate);
	
	//remove first element of testlist
	testlist.pop_front();

	REQUIRE(testlist.front().booktitle == book2.booktitle);
	REQUIRE(testlist.front().author == book2.author);
	REQUIRE(testlist.front().publicationdate == book2.publicationdate);






}
//Testcase for Stacking with list (Last in - first out)
TEST_CASE("Stack: Last in First out") {
	list<Value> testlist;

	Value book1, book2;
	book1.booktitle = "The Way of Kings";
	book1.author = "Brandon Sanderson";
	book1.publicationdate = "2010";

	testlist.push_front(book1);

	book2.booktitle = "Worlds of Radiance";
	book2.author = "Brandon Sanderson";
	book2.publicationdate = "2014";

	testlist.push_front(book2);

	//Test to see that first element of testlist is The hobbit
	REQUIRE(testlist.front().booktitle == book2.booktitle);
	REQUIRE(testlist.front().author == book2.author);
	REQUIRE(testlist.front().publicationdate == book2.publicationdate);

	//remove first element of testlist
	testlist.pop_front();

	REQUIRE(testlist.front().booktitle == book1.booktitle);
	REQUIRE(testlist.front().author == book1.author);
	REQUIRE(testlist.front().publicationdate == book1.publicationdate);
}
/*
TEST_CASE("INSERT AND FIND") {


}

TEST_CASE("Print out list") {
	
}*/