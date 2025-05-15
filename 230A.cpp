// s -  kirito's strength
// n - dragon count
// x - dragon stre.
// y - bonus
#include <bits/stdc++.h>
using namespace std;


void Solve() {
    int S, N;cin >> S >> N;
    vector<pair<int, int>> X(N);
    for (int i = 0; i < N; i++) { cin >> X[i].first >> X[i].second; }
    sort(X.begin(), X.end());
    bool f = true;
    for (int i = 0; i < N; i++) {
        if (S > X[i].first) {
            S += X[i].second;        
        }
        else {
            f = false;
            cout << "NO";
            break;
        }
    }
    if (f) {
        cout << "YES";
    }

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