#include <iostream>

using namespace std;

bool isPrime(int n) {
	
	for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; 
		}
	}
	return true;
}

int main() {
	
	int counter(0), val(1);
	
	while (counter != 10001) {
		
		val++;
		if (isPrime(val)) {
			counter++;
		}
	}
	
	cout << val;
	
	return 0;
}
