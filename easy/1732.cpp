#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int>& gain) {
 	int max = 0, altitude = 0;
	for (int i = 0; i < gain.size(); i++) {
		altitude += gain[i];	
		if (altitude > max){
			max = altitude;
		}
	}
	return max;
}

int main(){
	vector<int> vec = {-5,1,5,0,-7};
	cout << largestAltitude(vec);
}
