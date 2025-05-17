#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

string to_upper(string a) { for (int i = 0;i < (int)a.size();++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string to_lower(string a) { for (int i = 0;i < (int)a.size();++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int lc = 0, uc = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size();i++) {
        if (isupper(s[i])) {
            uc++;            
        }
        else {            
            lc++;
        }
    }
    // dbg(lc, uc, s);
    if (uc > lc) {
        cout << to_upper(s);        
    }
    else {
        cout << to_lower(s);        
    }
    return 0;
}
