#define CATCH_CONFIG_MAIN

#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include<algorithm>
#include"catch.hpp"

using std::string;
using std::iterator;
using std::list;
using std::cout;
using std::cin;
using std::endl;


struct Book_Meta_Data {
	string booktitle;
	string author;
	string publicationdate;
};

//prints contents of linked list, starting w/ given node
void printlist(list <Book_Meta_Data>& V) {

	list <Book_Meta_Data>::iterator it;
	for (it = V.begin(); it != V.end(); ++it) {
		cout << '\t' << it->booktitle << endl;
		cout << '\t' << it->author << endl;
		cout << "\t Publication date: " << it->publicationdate << endl;
		cout << endl;
	}

}



//lambda function for sorting
struct sort_by_Title {
	bool operator()(Book_Meta_Data const& b1, Book_Meta_Data const& b2) const {
		return b1.booktitle < b2.booktitle;
	}
};




//Testcase for Queueing with list (First in First out)
TEST_CASE("Queue: First in First out") {
	list<Book_Meta_Data> testlist;

	Book_Meta_Data book1{ "The Hobbit", "J.R Tolkien", "1937" }, book2{ "The Fellowship of the Ring" " J.R Tolkien", "1943" };
	

	//book1 is first element of list
	testlist.push_back(book1);


	//book 2 is second element of list
	testlist.push_back(book2);
	
	//Test to see that first element of testlist is book1
	REQUIRE(testlist.front().booktitle == book1.booktitle);
	REQUIRE(testlist.front().author == book1.author);
	REQUIRE(testlist.front().publicationdate == book1.publicationdate);
	
	//remove first element of testlist, making book2 the first element of list
	testlist.pop_front();

	//test to see the first element of book list is now book 2
	REQUIRE(testlist.front().booktitle == book2.booktitle);
	REQUIRE(testlist.front().author == book2.author);
	REQUIRE(testlist.front().publicationdate == book2.publicationdate);






}
//Testcase for Stacking with list (Last in - first out)
TEST_CASE("Stack: Last in First out") {
	list<Book_Meta_Data> testlist;

	Book_Meta_Data book1{ "The Way of Kings","Brandon Sanderson","2010" }, book2{ "Worlds of Radiance", "Brandon Sanderson", "2014" };
	
	//make book1 last element of list 
	testlist.push_front(book1);

	//book 2 is now first element of list
	testlist.push_front(book2);

	//Test to see that first element of testlist is book 2
	REQUIRE(testlist.front().booktitle == book2.booktitle);
	REQUIRE(testlist.front().author == book2.author);
	REQUIRE(testlist.front().publicationdate == book2.publicationdate);

	//remove first element of testlist
	testlist.pop_front();

	//test to see that first element of testlist is now book 1
	REQUIRE(testlist.front().booktitle == book1.booktitle);
	REQUIRE(testlist.front().author == book1.author);
	REQUIRE(testlist.front().publicationdate == book1.publicationdate);
}


TEST_CASE("INSERT AND FIND") {
	//declare list
	list<Book_Meta_Data> testlist;

	//declare book1 and book2 to be pushed into list
	Book_Meta_Data book1{ "The Way of Kings","Brandon Sanderson","2010" }, book2{ "Worlds of Radiance", "Brandon Sanderson", "2014" };
	
	testlist.push_front(book1);
	testlist.push_front(book2);

	//sort teslist by book title
	std::sort(testlist.begin(), testlist.end(), sort_by_Title());
	




	

}


/*
TEST_CASE("Print out list") {
	
}*/