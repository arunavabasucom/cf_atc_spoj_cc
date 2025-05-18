#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    long long s = 0, ps = 0;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N;i++) { cin >> A[i]; }
    for (int i = 0; i < N;i++) { s += A[i]; ps += (long long)(A[i] * A[i]); }
    cout << ((s * s - ps) / 2);
    return 0;
}