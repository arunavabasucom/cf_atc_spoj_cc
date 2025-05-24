#include <bits/stdc++.h>
using namespace std;
#define fixed(n) fixed << setprecision(n)


int main(){
    int X, Y,ct = 0;
    double prob;
    cin >> X >> Y;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (((i + j) >= X) || (abs(i - j) >= Y))
                ct++;                
        }
    }
    if (ct == 0) { cout << 0 << endl; return 0; }
    prob = ct / 36.0;
    cout << fixed(30) << prob<< endl;
    return 0;
}