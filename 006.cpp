#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//ind is the individuals squared, sum is the sum, then squared
	long ind(0), sum(0);
	
	for (int i = 0; i <= 100; i++) {
		
		ind += pow(i, 2);
		sum += i;
		
	}
	
	sum = pow(sum, 2);
	
	cout << sum - ind;
	
	return 0;
}
