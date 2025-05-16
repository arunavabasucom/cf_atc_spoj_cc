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
    int N, M,L,H;
    cin >> N >> M;
    vector<int> A(M);
    for (int i = 0; i < M; i++) { cin >> A[i]; } sort(A.begin(), A.end());
    // for (int i = 0; i < M; i++) {
        
    // }
    int i = 0;
    // 1 1 2 -> 1 
    // 0 1 2 -> 2
    // 0 0 2 -> 4
    // 0 0 1 -> 5
    while (i < A.size()) {
        if (A[i] != 0 & A[i]>0) {
            L += A[i];
            A[i]--;
        }
        else {
            i++;        
        }            
    }
    cout << L;


    return 0;
}