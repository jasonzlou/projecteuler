#include <iostream>

using namespace std;

bool isPal(int num) {
	
	int n = num, rev(0);
	
	while (n > 0) {
		int dig = n % 10;
		rev = rev * 10 + dig;
		n /= 10;
	}
	
	if (num == rev) {
		return true;
	} else {
		return false;
	}
}

int main() {
	
	int maxPal(0);
	
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			if (isPal(i * j) && i * j > maxPal) {
				maxPal = i * j;
			}
		}
	}
	
	cout << maxPal;
	
	return 0;
}
