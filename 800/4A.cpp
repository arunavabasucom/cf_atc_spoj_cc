// watermalon 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin >> w;
    // one of the parts is always going to >= 2
    // w = 2-> 1,1 but the 2%2 == 0 >> w>2
    if ((w % 2) == 0 && w > 2)
        cout << "YES";
    else
        cout << "NO";


    // for (int i = 2; i < w; i += 2) {        
    //     if ((w - i) % 2 == 0) {
    //         cout << "YES";
    //         exit(0);
    //     }
    // }
    // cout << "NO";
    return 0;
}

