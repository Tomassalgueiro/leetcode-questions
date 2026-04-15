
#include <iostream>
using namespace std;

int sumOfTheDigitsOfHarshadNumber(int x) {

	int temp = 0, number_loop = x, sum = 0;
	while(number_loop > 0){
		sum += number_loop % 10;
		number_loop /= 10;
	}
	cout << number_loop << endl;
	cout << sum << endl;
	cout << x << endl;
	if(x % sum == 0) { return sum; }
	else { return -1; } 
}


int main(){
	cout << sumOfTheDigitsOfHarshadNumber(18) << endl;
	cout << endl << endl;
	cout << sumOfTheDigitsOfHarshadNumber(23) << endl;
}
