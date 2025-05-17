#include <bits/stdc++.h>
using namespace std;

void Solve() {
    int N, M; bool f = false;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) { cin >> A[i]; }

    set<int> st(A.begin(), A.end());

    for (int i = 1; i <= M; i++) {
        if (st.find(i) == st.end()) {
            cout << 0;
            f = true;
            return;

        }
    }
    if (!f) {
        cout << N - M;        
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    Solve();
    return 0;
}
