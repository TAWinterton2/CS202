#include<iostream>
#include<math.h>


int fib(int n) {
	if (n <= 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int fib_loop(int n) {
	int t1 = 0;
	int t2 = 1;
	int nT;

	for (int x = 1; x <= n; x++) {
		std::cout << t1 << " ";
		nT = t1 + t2;
		t1 = t2;
		t2 = nT;

	}
	std::cout << std::endl;
	return 0;
}

int main() {
	
	int j = 0;

	std::cout << fib(9) << std::endl;

	while (j < 9) {
		std::cout << ' ' << fib(j);
		j++;

	}
	std::cout << std::endl;

	std::cout << fib(9);

	std::cout << std::endl;

	std::cout << fib_loop(9) << std::endl;
	
	return 0;

}