#include <vector>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int>& nums){

	int current_num = nums[0];
	vector<int> indexes = {0};
	for(int i = 1; i < nums.size(); i++){

		if (nums[i] == current_num){
			nums[i] = -101;	
		}
		else{
			indexes.push_back(i);
			current_num = nums[i];
		}
	}

	for(int i = 1; i < indexes.size(); i++){
		int aux = nums[i];
		nums[i] = nums[indexes[i]];
		nums[indexes[i]] = aux;
	}

	return indexes.size();
}

int main(){
	vector<int> lista ={0,0,1,1,1,2,2,3,3,4};
	cout << removeDuplicates(lista);

}
