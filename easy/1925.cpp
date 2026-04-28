#include <iostream>

using namespace std;

int triangleSquares(int num){
	
	int count = 0;

	for(int i = 1; i <= num; i++){
	   for(int j = i; j <= num; j++){
	     for(int k = j; k <= num; k++){
		      cout << i << "e" << j << "e" << k <<endl;
		      if((i*i) + (j*j) == k*k) count+=2;

	      }
	  }
	}
	return count;
}

int main(){
	cout << triangleSquares(10);
}
