#include <bits/stdc++.h>
using namespace std;
// Ti-1 + S + 0.5 > Ti
int main(){
    int N, S, pt = 0;
    bool res = true;
    cin >> N >> S;
    vector<int> T(N);
    for (int i = 0; i < N; i++) cin >> T[i];
    for (int i = 0; i < N; i++) {
        if ((S + pt + 0.5) < T[i]) {
            res = false;
            break;            
        }
        pt = T[i];
    }
    if (res)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}