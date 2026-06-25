#include <vector>
#include <algorithm>

using namespace std;

int countBits(int n){
	int count;
	while(n > 0){
		if (n % 2 == 1){count++;}
		n /= 2;	
	}

	return count;
}

vector<int> sortByBits(vector<int>& arr) {
	vector<int> res;
	vector<pair<int, int>> pairs;

	for(int i = 0; i < arr.size(); i++){
		pairs.push_back({countBits(arr[i]),arr[i]});
	}

	sort(pairs.begin(),pairs.end());

	for(auto [bits,num] : pairs){
		res.push_back(num);
	}
}

int main(){
	 
}



