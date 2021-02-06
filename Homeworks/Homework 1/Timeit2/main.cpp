
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
using std::list;

int main() {
	
	int menu_select;
	string user_book;
	string text2find;
	cout << "Time it 2 Test: " << '\n';
	cout << "Please select a book " << endl;
	cout << "1) Beowulf" << '\n';
	cout << "2) Grimm Brothers: Fairy Tales" << '\n';
	cout << "3) Scarlet Letter" << '\n';
	cout << "4) Canterbury Tales" << '\n';
	cout << "5) Alice in Wonderland" << '\n';
	cin >> menu_select;

	switch (menu_select) {
	case 1:
		user_book = "Beowulf.txt";
		text2find = "{I put a stop to the outrages of the sea-monsters.}";
		break;
	case 2:
		user_book = "GrimBros.txt";
		break;
	case 3:
		user_book = "ScarletLetter.txt";
		break;
	case 4:
		user_book = "Canterbury.txt";
		break;
	case 5:
		user_book = "Alice.txt";
		break;
	default:
		cout << "Invalid Choice " << endl;
		return 0;



	}

	//string text and text to find in book 
	std::string text;
	

	//Stopwatch class called 
	Stopwatch timer;

	//vector to read in text file
	vector<string> booktxt;
	cout << "Reading in Beowulf.txt into vector" << endl;
	cout << "Press enter to begin" << endl;
	while (cin.get() != '\n');

	//list to read in text file
	list <string> booktxt_list;

	timer.Start();

	//read in file and push string into vector
	ifstream Book_vec("Beowulf.txt");
	ifstream Book_list("Beowulf.txt");

	if (!Book_vec) {
		cout << "Error in opening file" << endl;
	}
	else {

		while (std::getline(Book_vec, text)) {
			booktxt.push_back(text);
		}

	}
	timer.Stop();


	cout << "Finished Reading in Text file into vector" << endl;;
	cout << "Elasped time seconds: ";
	timer.Time_Seconds();
	cout << endl;
	cout << "Elapsed time Milliseconds: ";
	timer.Time_Milliseconds();

	while (cin.get() != '\n');

	//read in file with list

	cout << "Reading in Beowulf.txt into list" << endl;
	cout << "Press enter to begin" << endl;
	while (cin.get() != '\n');

	if (!Book_list) {
		cout << "Error in opening file" << endl;
	}
	else {
		timer.Start();
		while (std::getline(Book_list, text)) {
			booktxt_list.push_back(text);
		}

	}
	timer.Stop();
	
	cout << "Finished Reading in Text file" << endl;;
	cout << "Elasped time seconds: ";
	timer.Time_Seconds();
	cout << endl;
	cout << "Elapsed time Milliseconds: ";
	timer.Time_Milliseconds();

	//find text from book (Vector) 
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

	while (cin.get() != '\n');
	//find text from book (list) 
	cout << "Find a string of text in Book " << endl;
	cout << "Press Enter to begin" << endl;
	while (cin.get() != '\n');

	//list iterator
	list<string>::iterator it;
	timer.Start();
	
	//Fetch iterator with the string in text2find
	it = std::find(booktxt_list.begin(), booktxt_list.end(), text2find);

	//check if it points to end or not
	if (it != booktxt_list.end()) {
		cout << "Text found! " << endl;
		timer.Stop();

		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << endl;
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();
	}
	else {
		cout << "Text not found " << endl;
		timer.Stop();

		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << endl;
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();
	}



	system("pause");
	return 0;

}