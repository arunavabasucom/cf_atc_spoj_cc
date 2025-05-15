#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,res;
    cin >> s;
    unordered_map<string, int> mp = {
        {".",0},
        {"-.",1},
        {"--",2}
    };
    int i = 0;
    while (i < s.size()) {
        if (mp.count(s.substr(i, 2))) {
            cout << mp[s.substr(i, 2)];
            i += 2;
        }
        else {
            cout << 0;
            i++;
        }
    }

    return 0;
}