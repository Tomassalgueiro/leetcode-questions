// in this exercise we receive an array and we need to create pairs (i,j) so that
// each pair follows the rules:
// 0 <= i < j < n
// lower <= nums[i] + nums[j] <= upper
// 
// My thought:
// For this exercise i thought on iterating through all values in nums.
// 
// Why can't we iterate through j = i + 1 to get a better time?
// 	This all due to the fact that i needs to be smaller than j. 
// 	This can be solved by sorting the array, since i + j = j + i.
//
// 	Note: a brute force algorithm will just timeout the program on big arrays
// 
// Is there a better way than to loop through every array element in order?
// 	Yeah, starting by the min value on i would be faster.
//
#include <vector>
#include <iostream>
#include <algorithm> 

using namespace std;

long long countFairPairs(vector<int>& nums, int lower, int upper){
	long long pair_count = 0;
	sort(nums.begin(), nums.end());

	for(int i = 0; i < nums.size(); ++i){	
		auto j = lower_bound(nums.begin() + i + 1, nums.end()+i+1, lower - nums[i]);
		auto k = lower_bound(nums.begin() + i + 1, nums.end()+i+1, upper - nums[i] + 1);	
		pair_count += k - j; 
	}	

	return pair_count;
}

int main() {
	vector<int> v = {0,1,7,4,4,5};
	cout << countFairPairs(v,3,10) << endl;
}

