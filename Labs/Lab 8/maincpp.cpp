#include<iostream>
#include<string>
#include"Foo.h"


using std::cout;
using std::cin;
using std::endl;
using std::ostream;


//(1) - Function w/ Static Variable 
void static_var_demo() {
	static int count = 0;
	cout << count << ' ';

	count++;
}

int main() {
	Foo f1(10);
	Foo f2(15);
	cout << "(1) - Function call w/ satic Variable" << endl;
	for (int x = 0; x <= 5; x++) {
		static_var_demo();
	}

	cout << endl;
	cout << endl;

	cout << "(3 and 4) - Static member variable" << endl;

	//get current value for static variable 
	cout << "Current static_variable value: " << Foo::return_stat_var();
	 
	cout << endl; 

	cout << f1 << endl; //print out non static varialbe

	cout << f2 << endl; //print out non static varialbe

	cout << endl;
	
	Foo f3(14);

	//get current value for static variable 
	cout << "Current static_variable value: " << Foo::return_stat_var() << endl;
	



	return 0;

}