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

//global struct for Program
struct Book_Meta_Data {
	string booktitle;
	string author;
	int publicationdate;
	
	//copy struct
	Book_Meta_Data(string booktitle, string author, int publicationdate) : booktitle(booktitle)
		, author(author), publicationdate(publicationdate) {}

	//bool operator, will use for sorting
	bool operator < (const Book_Meta_Data& book) const {
		return booktitle < book.booktitle;
	}

	friend bool operator == (const Book_Meta_Data& b1, const Book_Meta_Data& b2);
	
};

//struct to use for comparing 2 books
struct Book_Compare_title {
	bool operator() (const Book_Meta_Data& book1, const Book_Meta_Data& book2) {
		if (book1.booktitle == book2.booktitle) 
			return book1 < book2;
		return book1.booktitle < book2.booktitle;
	}
};


//bool operator for comparing
bool operator == (const Book_Meta_Data& b1, const Book_Meta_Data& b2) {
	return b1.booktitle == b2.booktitle;
}


//prints contents of linked list, starting w/ given node
bool printlist(list <Book_Meta_Data>& V) {

	list <Book_Meta_Data>::iterator it;
	for (it = V.begin(); it != V.end(); ++it) {
		cout << '\t' << it->booktitle << endl;
		cout << '\t' << it->author << endl;
		cout << "\t Publication date: " << it->publicationdate << endl;
		cout << endl;
	}
	if (it == V.end());
	return true;
}




//Testcase for Queueing with list (First in First out)
TEST_CASE("Queue: First in First out") {
	list<Book_Meta_Data> testlist;

	Book_Meta_Data book1{ "The Hobbit", "J.R Tolkien", 1937 };
	Book_Meta_Data book2{ "The Fellowship of the Ring"," J.R Tolkien", 1943 };
	

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

	Book_Meta_Data book1{ "The Way of Kings","Brandon Sanderson",2010 };
	Book_Meta_Data book2{ "Worlds of Radiance", "Brandon Sanderson", 2014 };
	
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

//Testcase for Finding element in list and inserting new element


TEST_CASE("INSERT AND FIND") {
	//declare list
	list<Book_Meta_Data> testlist;
	list<Book_Meta_Data>::iterator it;

	//declare book1 and book2 to be pushed into list
	Book_Meta_Data book1{ "The Way of Kings","Brandon Sanderson",2010 };
	Book_Meta_Data book2{ "Worlds of Radiance", "Brandon Sanderson", 2014 };
	
	testlist.push_front(book1);
	testlist.push_front(book2);

	//sort teslist by book date, included lambda function to make .sort sort by publish year
	testlist.sort(Book_Compare_title());
	
	
	//search for Worlds of Radiance
	
	list<Book_Meta_Data>::iterator findit = std::find(testlist.begin(), testlist.end(), Book_Meta_Data("Worlds of Radiance", "Brandon Sanderson", 2014));
	
	REQUIRE(findit != testlist.end());

	//create book3 to be inserted into pos of findit

	Book_Meta_Data book3{ "Oathbringer", "Brandon Sanderson", 2017 };

	testlist.insert(findit, book3);

	//test to see last element of testlist is book3
	REQUIRE(testlist.back().booktitle == "Oathbringer");
	REQUIRE(testlist.back().author == "Brandon Sanderson");
	REQUIRE(testlist.back().publicationdate == 2017);


}

//Test case for printing out all elements in list

TEST_CASE("Print out list") {
	//declare list
	list<Book_Meta_Data> testlist;
	
	Book_Meta_Data book1{ "Throne of Glass", "Sarah J. Maas", 2014 }, 
		book2{"Assassin's Apprentince", "Robin Hobb", 1996}, 
		book3{"Arrows of the Queen", "Mercedes Lackey", 1987};

	REQUIRE(printlist(testlist) == true);

	



}