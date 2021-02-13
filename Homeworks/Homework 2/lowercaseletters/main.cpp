#include<iostream>
#include<string>
#include<string.h>
#include<cstdio>
#include<stdio.h>



//function to convert string to lower case
void to_lower(char* string) {
	//counters to count thorugh each char
	//ascii  values for upper case letters range from 65 - 90
	int counter1, counter2;
	
	//check to see if letter is already lowercase
	for (counter2 = 0; string[counter2] != '\0'; counter2++)
	{

	}
	//convert Letter to uppercase 
	for (counter1 = 0; counter1 <= counter2; ++counter1) {
		if (string[counter1] >= 65 && string[counter1] <= 92) {
			string[counter1] = string[counter1] + 32;
		}
	}
	std::cout << "Converted: " << string;
}


int main() {
	char teststring[20];

	//get in string from user
	std::cout << "Enter String w/ uppercase letters: ";
	std::fgets(teststring, 20, stdin);

	//convert all upercase letters to lowercase
	to_lower(teststring);

	return 0;
}

