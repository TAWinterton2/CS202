#include<iostream>
#include<string>
#include<stdio.h>


//function to convert string to lower case
void to_lower(char* string) {
	//counters to count thorugh each char
	int counter1, counter2;
	
	//check to see if letter is already lowercase
	for (counter1 = 0; string[counter1] != '\0'; counter1++)
	{

	}
	//convert Letter to uppercase 
	for (counter2 = 0; counter2 <= counter1; ++counter2) {
		if (string[counter1] >= 65 && string[counter1] <= 92) {
			string[counter1] = string[counter1] + 32;
		}
	}
	std::cout << "Converted: " << string;
}


int main() {
	char teststring[10], * a;

	std::cout << "Enter String w/ uppercase letters: ";
	std::gets(teststring);

	to_lower(teststring);

	return 0;
}

