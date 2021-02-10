#include<iostream>
#include<list>
#include<string>

using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;


struct Value {
	string booktitle;
	int publicationdate;
	struct Value* next;
};


//prints contents of linked list, starting w/ given node
void printlist(list <Value> V) {

	list <Value> :: iterator it;
	for (it = V.begin(); it != V.end(); ++it) {
		cout << '\t' << *it << endl;
	}

}