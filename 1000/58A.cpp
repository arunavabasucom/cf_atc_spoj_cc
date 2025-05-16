#include <bits/stdc++.h>
using namespace std;
//hello
void Solve() {
    string s;
    cin >> s;
    vector<char> h = { 'h','e','l','l','o' };
    int i = 0;
        for (char it : s) {
            if (it == h[i]) {
                i++;
            }
        }
        // cout << i;
        if (i == 5) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;

        Solve();

    return 0;
}