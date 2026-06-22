#include <iostream>
#include <vector>

using namespace std;

// we need to check for the presence of the letters b a l l o o n
// they can only be used once, so we may need to replace them with an unused letter
int maxNumberOfBallons(string text){
	// count the appearance of each letter
	vector<int> vec = { 0,0,0,0,0 };
	for(int i = 0; i < text.size(); i++){
		if (text[i] == 'b') {
			vec[0] +=1;
		}
		if (text[i] == 'a') {
			vec[1] +=1;
		}
		if (text[i] == 'l') {
			vec[2] +=1;
		}
		if (text[i] == 'o') {
			vec[3] +=1;
		}
		if (text[i] == 'n') {
			vec[4] +=1;
		}
	}

	vec[2] = vec[2]/2;
	vec[3] = vec[3]/2;
	int min = vec[0];
	for(int i = 0; i < vec.size(); i++){
		if (vec[i] < min){
			min = vec[i];
		}
	}

	return min; 
}

int main(){
	cout << maxNumberOfBallons("bballoon");

}

