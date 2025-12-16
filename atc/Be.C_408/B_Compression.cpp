#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    set<int> A;
    int temp;
    while (cin >> temp) { A.insert(temp); }
    cout << A.size() << endl;
    for (int i : A) cout << i << " ";
    return 0;
}