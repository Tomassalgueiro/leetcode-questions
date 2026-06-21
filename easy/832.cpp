#include <algorithm>
#include <vector>

using namespace std;

vector<int> invert(vector<int> vec){
	for(int j = 0; j < vec.size(); j++){
		vec[j] ^=1;
	}	
	return vec;
}

vector<int> flip(vector<int> vec){
	reverse(vec.begin(), vec.end());
	return vec;
}

// this exercise is simple, we need to transform every sub vector into the reverse, [1,0,0] => [0,0,1]
// and then we need to invert it to [0,0,1] => [1,1,0]
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
	for(int j = 0; j < image.size(); j++){
		image[j] = flip(image[j]);
		image[j] = invert(image[j]);
	}
	return image;
        
}

int main(){
	vector<vector<int>> vec1 = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
	vector<vector<int>> res = flipAndInvertImage(vec1);
}

