#include <iostream>

using namespace std;

bool check(int n) {
	
	if (n % 2 == 0 && n % 3 == 0 && n % 4 == 0 && n % 5 == 0 && n % 6 == 0 && n % 7 == 0 && n % 8 == 0 && n % 9 == 0 && n % 10 == 0 && n % 11 == 0 && n % 12 == 0 && n % 13 == 0 && n % 14 == 0 && n % 15 == 0 && n % 16 == 0 && n % 17 == 0 && n % 18 == 0 && n % 19 == 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	
	int val(100);
	
	while(!check(val)) {
		
		val++;
	}
	
	cout << val;
	
	return 0;
}
	
