#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using std::cout;
using std::cin;

//Static/Global Variable 
int global = 10;



//prints pointer of variable 
void printPointer(int i) {
	int* iptr = &i;
	cout << "i = " << *iptr << "\n";
	cout << "&i = " << iptr << "\n";


}

int main() {


}