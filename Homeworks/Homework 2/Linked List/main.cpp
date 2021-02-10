#include<iostream>
#include<list>
#include"Value.cpp"

using std::list;
using std::cout;
using std::cin;
using std::endl;

int main() {

	//struct value with 3 nodes 
	list<Value> vlist1, vlist2;


	Value* head = NULL;
	Value* second = NULL;
	Value* third = NULL;

	//3 nodes allocated into heap

	head = new Value();
	second = new Value();
	third = new Value();

	head->booktitle = "The Hobbit"; // assing data in first node
	head->next = second; // link first Value w/ second

	second->booktitle = "The Fellowship of the Ring";
	head->next = third;

	third->booktitle = "The Two Towers";
	third->next = NULL;

	printlist(head);


	return 0;
}