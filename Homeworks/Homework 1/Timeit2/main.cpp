
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<chrono>
#include<vector>
#include<fstream>
#include<algorithm>
#include<list>
#include<iterator>
#include"Stopwatch.h"


using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::fstream;
using std::ifstream;

int main() {
	//string text and text to find in book 
	std::string text;
	std::string text2find = "{I put a stop to the outrages of the sea-monsters.}";

	//Stopwatch class called 
	Stopwatch timer;

	//vector to read in text file
	vector<string> booktxt;
	cout << "Reading in Beowulf.txt" << endl;
	cout << "Press enter to begin" << endl;
	while (cin.get() != '\n');

	timer.Start();

	//read in file and push string into vector
	ifstream Book("Beowulf.txt");

	if (!Book) {
		cout << "Error in opening file" << endl;
	}
	else {
		while (std::getline(Book, text)) {
			booktxt.push_back(text);
		}
	}
	timer.Stop();


	cout << "Finished Reading in Text file" << endl;;
	cout << "Elasped time seconds: ";
	timer.Time_Seconds();
	cout << endl;
	cout << "Elapsed time Milliseconds: ";
	timer.Time_Milliseconds();

	while (cin.get() != '\n');

	//find text in from book
	cout << "Find a string of text in Book " << endl;
	cout << "Press Enter to begin" << endl;
	while (cin.get() != '\n');
	timer.Start();
	if (std::find(booktxt.begin(), booktxt.end(), text2find) != booktxt.end()) {
		cout << "Text found!" << endl;
		timer.Stop();
		cout << endl;
		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << endl;
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();

	}
	else {
		cout << "Text not found" << endl;
		timer.Stop();
		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << endl;
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();

	}
}