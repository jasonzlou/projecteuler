#include <iostream>

using namespace std;

int sum(0);

int fib(int a, int b) {
	
	int c = a + b;
	
	if (c < 4000000) {
		if (c % 2 == 0) {
			sum += c;
		}
		return fib(b, c);
	}
	return 0;
}

int main() {
	
	fib (0, 1);
	cout << sum;
	
	
	return 0;
}
