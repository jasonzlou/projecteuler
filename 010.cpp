#include <iostream>

using namespace std;

bool isPrime(int n) {
	
	if (n == 2) {
		return true;
	} else if (n % 2 == 0) {
		return false;
	}
	
	for (int i = 3; i < n; i+=2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	
	int below(2000000);
	long sum(0);
	
	for (int i = 2; i < below; i++) {
		if (isPrime(i)) {
			sum += i;
		}
	}
	
	cout << sum;
	
	return 0;
}
