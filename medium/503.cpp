#include <iostream>
#include <vector>

using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
	vector<int> res = {};
	int j = 0;

	for (int i = 0; i < nums.size(); i++) {
		// we will keep looping utill we reach the same i as the num we are analyzing
		j = i + 1;
		while (1){

			if (j >= nums.size()) {
				j = 0;
			}

			if (j == i) {
				res.push_back(-1);
				break;
			}


			if (nums[j] > nums[i]){
				res.push_back(nums[j]);
				break;
			}
			j++;
		}

	}

	return res; 

}

int main() {
	vector<int> input = {5,4,3,2,1};
	vector<int> output = {};

	output = nextGreaterElements(input);

	for (auto &it: output){
		cout << it << " " << endl;
	}
}
