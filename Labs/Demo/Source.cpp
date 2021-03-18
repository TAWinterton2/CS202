#include<memory>
#include<iostream>


int main() {
	auto siPtr = std::make_shared<int>(13);
	
	std::cout << *siPtr;

	return 0;

}