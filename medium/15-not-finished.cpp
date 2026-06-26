#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
	vector<vector<int>> res;
	sort(nums.begin(), nums.end());
	for(int i = 0; i < nums.size() - 2; i++){

	}
	res.erase(unique(res.begin(), res.end()), res.end());

	return res;
}

int main(){

}
