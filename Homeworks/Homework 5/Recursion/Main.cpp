#include<iostream>
#include<math.h>
#include"Stopwatch.h"

//Fibonacci Sequence (w/ recusion)
int fib(int n) {
	if (n <= 1) {
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

//Fibonacci Sequence (w/out recusion)

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

//Ackermann Function 
int ack(int m, int n) {
	if (m == 0) {
		return n + 1;
	}
	else if ((m > 0) && (n == 0))
	{
	return ack(m - 1, 1);
	}
	else if ((m > 0) && (n > 0)) {
		return ack(m - 1, ack(m, n - 1));
	}
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
	
	

	//Ackermann Test
	std::cout << "Ackermann Function Test " << std::endl;
	int A;

	A = ack(1, 2);
	std::cout << A << std::endl;
	

	return 0;

}