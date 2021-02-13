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



int main() { //main goes into stack

	int local1, local2, local3 ; //local variable - goes into stack

	std::vector<long> memorylocations;

	cout << "Address of global1: " << (long)&global1 << endl;
	memorylocations.push_back((long)&global1);
	cout << "Address of global2: " << (long)&global2 << endl;
	memorylocations.push_back((long)&global2);
	cout << "Address of global3: " << (long)&global3 << endl;
	memorylocations.push_back((long)&global3);
	cout << "Address of Local1:  " << (long)&local1 << endl;
	memorylocations.push_back((long)&local1);
	cout << "Address of Local2:  " << (long)&local2 << endl;
	memorylocations.push_back((long)&local2);
	cout << "Address of Local3:  " << (long)&local3 << endl;
	memorylocations.push_back((long)&local3);

	std::sort(memorylocations.begin(), memorylocations.end());
	
	cout << "Memory order: " << endl;

	for (int i = 0; i < memorylocations.size();  i++) {
		cout << memorylocations[i] << endl;

	}

	cout << "Stack Grows towards higher addresses" << endl;

	cout << "Adding in free store" << endl;

	
	
	3["Algorithm"];
	cout << 4["Algorithm"];
	return 0;

}