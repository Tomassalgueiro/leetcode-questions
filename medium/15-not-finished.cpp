#include <algorithm>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
	vector<vector<int>> res;
	sort(nums.begin(), nums.end());

	for(int i = 0; i < nums.size() - 2; i++){
		for(int j = i + 1; j < nums.size() - 1; j++){
			for(int k = j+1; k < nums.size(); k++){
				vector<int> temp = {};
				int sum = nums[i] + nums[j] + nums[k];
				if(sum == 0){
					temp.push_back(nums[i]);
					temp.push_back(nums[j]);
					temp.push_back(nums[k]);
					res.push_back(temp);
				}
			}
		}

	}
	res.erase(unique(res.begin(), res.end()), res.end());

	return res;
}

int main(){

}
