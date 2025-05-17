/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
mid -> (2,2)
1 position ->(1,4)
(2-1)+(4-2)
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int r1, c1;
  vector<vector<int>> mtr(5, vector<int>(5));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> mtr[i][j];
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (mtr[i][j] == 1) {
        r1 = i;
        c1 = j;
        break;
      }
    }
  }
  cout << (abs(r1 - 2) + abs(c1 - 2));
  return 0;
}