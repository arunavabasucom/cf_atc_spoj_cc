#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A > C) {
        cout << "Yes";
    }
    else if (A == C && B > D) {
        cout << "Yes";
    }
    else if (A == C && B < D) {
        cout << "No";
    }
    else {
        cout << "No";
    }
    return 0;
}