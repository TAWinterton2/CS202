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
int global1, global2, global3;



//prints pointer of variable 
void printPointer(int i ){
	int* iptr = &i;
	cout << "Value " << *iptr << endl;
	cout << "Adress: " << iptr << endl;
}

int main() { //main goes into stack

	int local1, local2, local3 ; //local variable - goes into stack
	

	cout << "Address of global1: " << (long)&global1 << endl;
	cout << "Address of global2: " << (long)&global2 << endl;
	cout << "Address of global3: " << (long)&global3 << endl;
	cout << "Address of Local1:  " << (long)&local1 << endl;
	cout << "Address of Local2:  " << (long)&local2 << endl;
	cout << "Address of Local3:  " << (long)&local3 << endl;



	return 0;

}