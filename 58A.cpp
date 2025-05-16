#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
using namespace std;
//hello
void Solve() {
    string s = "hlelo";
    // cin >> s;
    vector<char> h = { 'h','e','l','l','o' };
    int i = 0;
    // while (i < s.size()) {
        for (char it : s) {
            if (it == h[i]) {
                i++;
            }
        }
        cout << i;
        // }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    // cin >> test_cases;

        // cout << "Case #" << tc << ": ";
        Solve();
        cout << "Hello";
    return 0;
}