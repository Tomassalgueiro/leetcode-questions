#include <vector>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
       if (nums.size() == 0){
	       return {{}};
       } 

       int first = nums[0];
       vector<int> rest(nums.begin() + 1, nums.end()); 	

       vector<vector<int>> perms = permute(rest);
       vector<vector<int>> res;

	for(const auto &p : perms){
		for(size_t i = 0; i <= p.size(); ++i){ 
			vector<int> perm_copy = p;
			perm_copy.insert(perm_copy.begin() + i, first);
			res.push_back(perm_copy);
		}
	}

       return res;
}

int main(){
	vector<int> nums = {1,2,3};
	permute(nums);
}
