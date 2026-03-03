/*
You are given a 0-indexed integer array nums and an integer threshold.

Find the length of the longest subarray of nums starting at index l and ending at index r (0 <= l <= r < nums.length) that satisfies the following conditions:

    nums[l] % 2 == 0
    For all indices i in the range [l, r - 1], nums[i] % 2 != nums[i + 1] % 2
    For all indices i in the range [l, r], nums[i] <= threshold

Return an integer denoting the length of the longest such subarray.

Note: A subarray is a contiguous non-empty sequence of elements within an array.
*/
#include <vector>
#include <iostream>

using namespace std;

int longestAlternatingSubarray(vector<int>& nums, int threshold) {
	int max_count = 0; 
	for(int i = 0; i < nums.size(); i++){
		if ( nums[i] % 2 > 0 || nums[i] > threshold){continue;}
		int count = 1, prev_parity = nums[i]%2;
		for ( int j = i+1; j < nums.size(); j++ ){
			if(nums[j] <= threshold && nums[j]%2 != prev_parity){
				count++;
				prev_parity = nums[j]%2;
			}
			else{
				break;
			}

		}
		max_count = max(max_count,count);
	}
	return max_count;
}

int main(){

	int threshold = 5;
	vector<int> test = {3,2,5,4};
	cout << longestAlternatingSubarray(test, threshold) << endl;

}
