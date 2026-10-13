#include <iostream>
#include <vector>

using namespace std;

// we need to present a solution that is O(log n), the best way to do this is just do a binary search
int searchInsert(vector<int>& nums, int target) {

	int left = 0;
	int right = nums.size() - 1;	
	int middle = 67;

	while(left <= right) {
	 	middle = left + (right - left) / 2;
		if (target == nums[middle]) { break; }

		if (target < nums[middle]) {
			left = middle + 1;
		}
		else {
			right = middle - 1;
		}

	}
	return middle; 
}

int main(){
	vector<int> nums = {1,3,5,7};
	cout << searchInsert(nums, 5);
}
