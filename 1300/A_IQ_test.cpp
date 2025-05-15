
#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
  int n, e = 0, o = 0, ei, oi;
  cin >> n;
  int arr[n];
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    if (arr[i] % 2 == 0) {
      e++;
      ei = i;
    } else {
      o++;
      oi = i;
    }
  }
  if (o < e) {
    cout << oi;
  } else {
    cout << ei;
  }
  return 0;
}