#include<iostream>
#include"Class_A.h"
#include"Class_B.h"
#include<string>



int main() {
	

	//Class_A constructed;
	{Class_A A1; }

	//Class_A constructed w/ variable
	{Class_A A2(10); }


	//Class_B consturced
	{Class_B B1; }

	//Class_B w/ Member Variables
	{Class_B B2("pink", 20); }

	return 0;


}
