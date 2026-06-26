#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

string intToRoman(int num){
	vector<int> base = { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
	vector<string> symbol = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
	string res;

	int i = base.size() - 1;
	while(num > 0){
		int div = num / base[i];
		while(div){
			res += symbol[i];
			div--;
		}
		
		num = num % base[i];
		i--;
	}

	return res;
}

int main(){

	cout << intToRoman(3749);

}
