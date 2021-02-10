#include<iostream>
#include<list>
#include<string>
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
void printlist(Value* n) {
	while (n != NULL) {
		cout << n->booktitle << ' ';
		n = n->next;
	}
}