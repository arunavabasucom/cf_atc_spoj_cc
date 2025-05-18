/*
n - number of passenger in the queue
m - plane count
A[m] - available seats
*/
#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int N, M,L=0,H=0;
    cin >> N >> M;
    multiset<int> MIN;
    multiset<int, greater<int>> MAX;
    //input multiset
    for (int i = 0; i < M; i++) {
        int K;
        cin >> K;
        MIN.insert(K);
        MAX.insert(K);
    }
    // calculate max value 
    for (int i = 0; i < N; i++) {
        int x = *MAX.begin();
        H += x;
        MAX.erase(MAX.lower_bound(x));
        x--;
        if (x > 0)
            MAX.insert(x);
    }
    for (int i = 0; i < N; i++) {
        int x = *MIN.begin();
        L += x;
        MIN.erase(MIN.lower_bound(x));
        x--;
        if (x > 0)
            MIN.insert(x);
    }
    cout << H << " " << L;

    // vector<int> A(M);
    // for (int i = 0; i < M; i++) { cin >> A[i]; } sort(A.begin(), A.end());
    // // for (int i = 0; i < M; i++) {
        
    // // }
    // int i = 0;
    // // 1 1 2 -> 1 
    // // 0 1 2 -> 2
    // // 0 0 2 -> 4
    // // 0 0 1 -> 5
    // while (i < A.size()) {
    //     if (A[i] != 0 & A[i]>0) {
    //         L += A[i];
    //         A[i]--;
    //     }
    //     else {
    //         i++;        
    //     }            
    // }
    // cout << L;


    return 0;
}