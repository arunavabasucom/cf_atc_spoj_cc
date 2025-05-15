#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void Solve() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    // cin >> test_cases;
    for (int tc = 1; tc <= test_cases; tc++) {
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}