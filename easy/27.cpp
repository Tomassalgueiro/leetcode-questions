// in this exercise we need to remove all ocurences of a value (val) in the array (nums)
// return the size of the array
// 
// Some important info:
// it does not matter what we swap the numbers for, because the corrector will only verify up to k elements
// of the solution
//
// we will subsitute the number for -1, since the range given on the exercise is 0 <= nums[i] <= 100
// 
// for that we will use vector.erase() to remove the element from the array, and then we will push back to add a -1 to the end of the array
// adding a +1 to the count so we can keep track of how many times we have removed.
// 
// we will also NEED to add i-- at the end everytime a value is removed to avoid skipping iterating an element. 
// e.g. the array [1,2,2,4,6,8,1] and val being 2.
// In this particular case when we remove the first "2" at i = 1, the next "2" will shift left to the index 1, and i will keep on going, essentially
// skipping it and going straight to "4", or index 3. 
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val){
	int count = 0; 
	for(int i = 0; i < nums.size(); i++){
		if(nums[i] == val){
			nums.erase(nums.begin()+i);	
			nums.push_back(-1);
			count += 1;
			i--;
		}
	}
	return nums.size() - count;
}
