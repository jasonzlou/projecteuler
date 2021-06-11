#include <iostream>

using namespace std;

int main() {
	
	for (int a = 1; a < 1000; a++) {
		
		bool flag = false;
		
		for (int b = 1; b < 1000; b++) {
			int c = 1000 - a - b;
			if ((a*a) + (b*b) == c*c) {
				cout << a*b*c;
				flag = true;
				break;
			}
		}
		
		if(flag) {
			break;
		}
	}
	
	return 0;
}
