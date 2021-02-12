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

//Static/Global Variable 
int global = 10;



//prints pointer of variable 
void printPointer(int var) {
	int* ptr = &var;
	cout << "Variable = " << *ptr << "\n";
	cout << "&i = " << ptr << "\n";


}

int main() { //main goes into stack

	int a = 4; //local variable - goes into stack

	unique_ptr<int> p; (new int (5));

	

	//printPointer(global);
	//printPointer(*p);
	//printPointer(a);
	cout << "Global/Static" << endl;
	cout << "Variable = " << global << endl;
	cout << "Address = " << &global << endl;

	cout << "Local Variable / Stack " << endl;
	cout << "Variable = " << a << endl;
	cout << "Address = " << &a << endl;

	cout << "Dynamic Memory / Reserved " << endl;
	cout << "Variable = " 
	


	return 0;

}