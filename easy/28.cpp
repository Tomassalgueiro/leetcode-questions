#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle) {

	bool flag = true;
	
	if (haystack.size() < needle.size()){
		return -1;
	}

	for (int i = 0; i < haystack.size()-needle.size() + 1; i++) {
		for (int j = 0; j < needle.size(); j++) {
			if (needle[j] != haystack[i+j]) {
				flag = false;
				break;
			}
		}


		if (flag) {
			return i;
		}

		flag = true;
	}
    
	return -1;
}

int main() {

	// must return 0	
	cout << strStr("leetcode","leet") << endl;
	// must return -1
	cout << strStr("daslkjd","leet") << endl;
	// must return 5
	cout << strStr("adaedleetcode","leet") << endl;
	// must return 0
	cout << strStr("l","l") << endl;

}
