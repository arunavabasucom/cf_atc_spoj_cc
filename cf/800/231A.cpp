#include <bits/stdc++.h>
// #include <io_setup.h>
using namespace std;

int main() {
    int n, ct = 0;
    cin >> n;

    for (int i = 0;i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            int temp;
            cin >> temp;
            sum += temp;
        }
        if (sum > 1)
            ct++;
    }
    cout << ct;
    return 0;
}