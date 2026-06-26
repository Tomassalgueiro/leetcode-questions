#include <iostream>

using namespace std;

int expandCenter(string s, int left, int right){
	int L = left, R = right;

	while(L >= 0 && R < s.size() && s[L] == s[R]){
		L--;
		R++;
	}
	return R-L-1;
}

// inside a string "babad" for e.g., we need to check if there are any palindromes
// and what is the longest, the approach i thought of was just checking everysingle one
// is this optimal? nope
// maybe one algorithm that starts form the center will have better results
string longestPalindrome(string s){
	if (s.length() < 1){
		return "";
	}

	int start, end = 0;
	string res;

	for(int i = 0; i < s.size(); i++){
		int len1 = expandCenter(s,i,i); 
		int len2 = expandCenter(s,i,i+1);

		int len = max(len1,len2);

		if (len > (end-start)){
			start = i - (len-1)/2;
			end = i + len/2;
		}
	}

	for(int i = start; i <= end; i++){
		res += s[i];
	}

	return res;
}


int main(){
	cout << longestPalindrome("cbbd");
}
