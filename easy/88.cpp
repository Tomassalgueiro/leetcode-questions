#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
	int count = 0;
	for (int i = m; i < m + n; i++){
		nums1[i] = nums2[count];
		count++;
	}
	sort(nums1.begin(),nums1.end());
}

int main(){
	vector<int> test1 =  {1,2,3,0,0,0}, nums2 = {2,5,6};
	int m = 3, n = 3;
	merge(test1,m,nums2,n);
	for(int i = 0; i < test1.size(); i++){
		cout << test1[i] << " ";
	}
	cout << endl;
}
