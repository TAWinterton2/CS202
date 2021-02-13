#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<memory>
#include<stdlib.h>


using std::cout;
using std::cin;
using std::endl;
using std::unique_ptr;

//Global Variable - goes into Static
int static_dat = 10 ;



int main() { //main goes into stack

	int stack_dat  = 10; //local variable - goes into stack
	int* ptr = new int ; //heap - free store
	int* heap_array = new int[5];

	heap_array[0] = 1;
	heap_array[1] = 2;
	heap_array[2] = 3;
	heap_array[3] = 4;
	heap_array[4] = 5;
	*ptr = 10;

	
	cout << "Address of global1: " << &static_dat << endl;

	cout << "Address of Local1:  " << &stack_dat << endl;

	cout << "Addresss for ptr " << ptr << endl;

	cout << endl;

	//check to see if static or stack sit lower
	if (&static_dat < &stack_dat) {
		cout << " static  sits lower withen memory than stack" << endl;
	}
	else {
		cout << " stack  sits lower withen memory than static " << endl;
	}

	//check to see if static or heap sit lower
	if (&static_dat > ptr) {
		cout << "Static sits higher in memory than Free Store(Heap)" << endl;
	}
	else {
		cout << "Free store (Heap) sits lower in memory than Satic" << endl;
	}

	//check to see if stack or heap sits lower
	if (&stack_dat < ptr) {
		cout << "Stack Sits lower than Free store(heap) " << endl;
	}
	else {
		cout << "Free store(heap) sits lower than Stack" << endl;
	}

	
	cout << "Stack Grows Downwards" << endl;

	delete ptr;
	cout << endl;

	cout << "Address for first element " << &heap_array[0] << endl;
	cout << "Address for last element " << &heap_array[4] << endl;

	if (&heap_array[0] < &heap_array[4]) {
		cout << "The first element of an array on the free stack sits lower " << endl;
	}
	else {
		cout << "The last element of an array on the free stack sits lower" << endl;
	}

	delete [] heap_array;


	return 0;

}