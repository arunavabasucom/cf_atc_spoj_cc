#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,f;
    cin >> r;

    vector<vector<int>> mtr(r, vector<int>(3));
    // input 

    for (int i = 0; i < mtr.size(); i++) {
        for (int j = 0; j < mtr[0].size(); j++) {
            cin >> mtr[i][j];
        }
    }
    for (int i = 0;i < 3;i++) {
        int temp = 0;
        for (int j = 0; j < mtr.size();j++) {
            temp = temp + mtr[j][i];
        }
        if (temp == 0) {
            f = 1;    
        }
        else {
            f = 0;
            break;  
        }
    }
    if (f == 1) 
        cout << "YES";
    else 
        cout << "NO";

    
        // int temp = 0;
    // for (int i = 0; i < mtr.size(); i++) {
    //     for (int j = 0; j < mtr[0].size(); j++) {
    //         temp += mtr[i][j];
    //     }
    // }
    // if (temp == 0)
    //     cout << "YES";
    // else
    //     cout << "NO";
    return 0;
}