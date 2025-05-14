/*
k * (1 + 2 + 3 + ... + w) = k * w * (w + 1) / 2
3*4*((4+1)/2)
*/
#include <bits/stdc++.h>

using namespace std;



int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int c = k * ((w * (w + 1)) / 2);
    cout << c-n;
    return 0;
}
