#include<iostream>
#include<math.h>


int fib(int n) {
	if (n <= 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int fib_loop(int n) {
	for (int x = 1; x <= n; x++) {


	}
}

int main() {
	
	std::cout << fib(9);

	
	return 0;

}