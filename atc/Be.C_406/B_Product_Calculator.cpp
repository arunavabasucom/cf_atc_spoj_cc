#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, K;
    unsigned __int128 s=1, lim=1;
    cin >> N >> K;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) { cin >> A[i]; }
    while (K--) lim *= 10;
    for (int i = 0; i < N;i++) {
        s *= A[i];
        if (s >= lim) {
            s = 1;
        }
    }
    cout << (long long)s<< endl;
    return 0;
}

