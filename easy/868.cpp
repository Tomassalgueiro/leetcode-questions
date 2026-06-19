#include <iostream>
#include <vector>

using namespace std;

int binaryGap(int n) {
  vector<int> bin;

  // this will give the binary number in reverse order
  // e.g. 145 will be 10001001 instead of 10010001 which doesn't change anything
  // on the actual algorithm of distance
  while (n > 0) {
    if (n % 2 == 0) {
      bin.push_back(0);
    } else {
      bin.push_back(1);
    }
    n /= 2;
  }

  int dis = 0, foundOnes = 0, max = 0;
  for (int i = 0; i < int(bin.size()); i++) {
    if (bin[i] == 1) {
      foundOnes++;
    } else if (foundOnes == 1 && bin[i] == 0) {
      dis++;
    }
    if (foundOnes == 2) {
      dis++;
      foundOnes = 1;
      if (dis > max) {
        max = dis;
      }
      dis = 0;
    }
  }

  return max;
}

int main() {
  cout << binaryGap(5) << endl;
  cout << binaryGap(6) << endl;
  cout << binaryGap(8) << endl;
  cout << binaryGap(22) << endl;
}
