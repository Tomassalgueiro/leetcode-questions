
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> maxSubsequence(vector<int>& nums, int k) {

	priority_queue<pair <int, int>> pqueue;

	for(int i = 0; i < nums.size(); i++){
		pqueue.push(make_pair(nums[i], i));
	}

	vector<pair<int,int>> temp;
	for(int j= 0; j < k; j++){
		temp.push_back(pqueue.top());
		pqueue.pop();	
	}

	sort(temp.begin(),temp.end(), [](auto &a, auto &b){ return a.second < b.second; });

	vector<int> result;
	for(pair<int,int> n  : temp){
		result.push_back(n.first);	
	}

	return result;
}

int main(){

vector<int> test1 = {2,1,3,3};
test1 = maxSubsequence(test1,2);
vector<int> test2 = {-1,-2,3,4};
test2 = maxSubsequence(test2,3);
vector<int> test3 = {3,4,3,3};
test3 = maxSubsequence(test3,2);

for(int i = 0; i < test1.size(); i++){
	cout << test1[i] << ",";
}
cout << endl;
for(int i = 0; i < test2.size(); i++){
	cout << test2[i] << ",";
}
cout << endl;
for(int i = 0; i < test3.size(); i++){
	cout << test3[i] << ",";
}
cout << endl;

}
