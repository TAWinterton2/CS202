#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<random>


using std::vector;
using std::cout;
using std::endl;
using std::mt19937;



int main() {

	//inner_product

	/*Computes inner product (i.e. sum of products) or
	performs ordered map/reduce operation on the range [first1, last1) 
	and the range beginning at first2.
	*/

	vector<int> stuff_a{ 10, 9, 2, 4, 0 };
	vector<int> stuff_b{ 6, 1, 3, 8, 11 };

	int sum = std::inner_product(stuff_a.begin(), stuff_a.end(), stuff_b.begin(), 0);

	cout << "The inner product of stuff_a and stuff_b is : " << sum << endl; 


	//random_shuffle, shuffle
	/*
	Reorders the elements in the given range [first, last) such that each possible permutation of those elements
	has equal probability of appearance.
	*/

	vector<char> stuff_c{ 'A', 'B', 'C', 'a', 'b', 'c' };

	std::random_device rd;
	mt19937 gen(rd());

	std::shuffle(stuff_c.begin(), stuff_c.end(), gen);

	for (int i = 0; i <= 5; ++i) {
		cout << stuff_c[i] << ' ';
	}
	

	return 0;
}