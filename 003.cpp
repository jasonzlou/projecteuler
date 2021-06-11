#include <iostream>
#include <cmath>

using namespace std;

int largest(0);
long val(600851475143);

bool isPrime(int n) {
	
	for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; 
		}
	}
	return true;
}

int main() {
	
	int max(1);
	
	for (int i = sqrt(val); i > 0; i--) {
		if (val % i == 0 && isPrime(i)) {
			max = i;
			break;
		}
	}
	
	cout << max;
	
	return 0;
}
