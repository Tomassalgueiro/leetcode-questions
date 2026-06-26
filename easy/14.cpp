#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs){

	string prefix = ""; 
	if (strs.size() < 0) {return "";}
	for (int i = 0; i < strs[0].size(); i++){
		for (int j = 1; j < strs.size(); j++){
			if(strs[0][i] != strs[j][i]){
				return prefix;
			}

		}
		prefix += strs[0][i];
	}
			
	return prefix;	
}

int main(){
	vector<string> vec = {"flower","flow","flight"};
	cout << longestCommonPrefix(vec);

}
