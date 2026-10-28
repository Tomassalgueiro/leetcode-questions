#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int threeSumClosest(vector<int>& nums, int target){

	int n = nums.size();
	sort(nums.begin(), nums.end());
	int res = 0;
	int minDiff = INT_MAX;

	for(int i = 0; i < nums.size() - 2; i++){
		
		int l = i + 1, r = n - 1;

		while (l < r) {

			int currSum = nums[i] + nums[l] + nums[r];

			if (abs(currSum - target) < minDiff) {
				minDiff = abs(currSum - target);
				res = currSum;
			}

			else if (abs(currSum - target) == minDiff) {
				res = max(res,currSum);
			}

			if (currSum > target) {
				r--;
			} else {
				l++;
			}
		}
	}

	return res;

}
