#include <iostream>

using namespace std;

// basically just do the binary conversion and count the 1's all at the same time
int hammingWeight(int n) {
	int result = 0;

	if (n <= 0) return 0;

	while  (n > 0){
		if (n % 2 == 1) { result++; }
		n /= 2;
	}	
	return result; 
}

int main() {

	cout << hammingWeight(11) << endl;
	cout << hammingWeight(128) << endl;
	cout << hammingWeight(2147483645) << endl;	
}
