
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
#include<deque>
#include"Stopwatch.h"


using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::fstream;
using std::ifstream;
using std::list;
using std::deque;

int main() {
	
	int menu_select;
	string user_book;
	string text2find;

	//swtich statement to choose book to read in from
	//and assing text for program to find
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
		text2find = "After the space of four years, at the time agreed upon, the four";
			
		break;
	case 3:
		user_book = "ScarletLetter.txt";
		text2find = "There was another pause; and the physician began anew to examine and";
		break;
	case 4:
		user_book = "Canterbury.txt";
		text2find = "Thus endeth the Prologue.";
		break;
	case 5:
		user_book = "Alice.txt";
		text2find = "On this the White Rabbit blew three blasts on the trumpet, and then";
		break;
	default:
		cout << "Invalid Choice " << endl;
		return 0;
	}

	//string text to grab from book and put into container
	std::string text;
	

	//Stopwatch class called 
	Stopwatch timer;

	//creating containers 
	vector<string> booktxt_vec;
	list <string> booktxt_list;
	deque<string> booktxt_deque;

	//read in file and push string into vector
	ifstream Book_vec(user_book);
	ifstream Book_list(user_book);
	ifstream Book_dq(user_book);
	//list to read in text file
	list <string> booktxt_list;


	//Reading into Vector 
	cout << "Reading in Book into vector" << endl;
	
	timer.Start();
	if (!Book_vec) {
		cout << "Error in opening file" << endl;
	}
	else {

		while (std::getline(Book_vec, text)) {
			booktxt_vec.push_back(text);
		}

	}
	timer.Stop();


	cout << "Finished Reading in Text File" << endl;;
	cout << "Elasped time seconds: ";
	timer.Time_Seconds();
	cout << "Elapsed time Milliseconds: ";
	timer.Time_Milliseconds();
	//read in file with list
	cout << endl;

	//Reading into List 
	cout << "Reading Book into list" << endl;
	
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
	cout << "Elapsed time Milliseconds: ";
	timer.Time_Milliseconds();
	cout << endl;

	//Reading into deque
	cout << "Reading Book into Deque" << endl;
	timer.Start();
	if (!Book_vec) {
		cout << "Error in opening file" << endl;
	}
	else {

		while (std::getline(Book_dq, text)) {
			booktxt_deque.push_back(text);
		}

	}
	timer.Stop();

	cout << "Finished Reading in Text file" << endl;;
	cout << "Elasped time seconds: ";
	timer.Time_Seconds();
	cout << "Elapsed time Milliseconds: ";
	timer.Time_Milliseconds();
	cout << endl;
	system("pause");
	cout << endl;




	//find text from book (Vector) 
	cout << "Finding Text in book  " << endl;
	timer.Start();
	if (std::find(booktxt_vec.begin(), booktxt_vec.end(), text2find) != booktxt_vec.end()) {
		cout << "Text found!" << endl;
		timer.Stop();
		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();

	}
	else {
		cout << "Text not found" << endl;
		timer.Stop();
		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();

	}
	
	cout << endl;

	//find text from book (list) 
	cout << "Finding text in book  " << endl;
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
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();
	}
	else {
		cout << "Text not found " << endl;
		timer.Stop();
		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();
	}

	//find text from book (deque)
	cout << "Finding Text in book " << endl;
	//deque iterator
	deque<string>::iterator it2;
	timer.Start();

	//Fethc iterator with string in text2find
	it2 = std::find(booktxt_deque.begin(), booktxt_deque.end(), text2find);

	//check if it2 points to end or not
	if (it2 != booktxt_deque.end()) {
		cout << "Text found! " << endl;
		timer.Stop();
		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();
	}
	else {
		cout << "Text not found " << endl;
		timer.Stop();
		cout << "Elasped time seconds: ";
		timer.Time_Seconds();
		cout << "Elapsed time Milliseconds: ";
		timer.Time_Milliseconds();
	}



	system("pause");
	return 0;

}