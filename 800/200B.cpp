#include <bits/stdc++.h>
using namespace std;
#define fixed(n) fixed << setprecision(n)

void Solve() {
    int n;
    double sum = 0;
    cin >> n;
    double A[n];
    for (int i = 0; i < n; i++) { cin >> A[i]; }
    for (int i = 0; i < n; i++) { sum += A[i]; }
    cout << fixed(12) <<  sum/n;
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