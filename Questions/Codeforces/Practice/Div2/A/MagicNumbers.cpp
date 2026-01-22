#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int i = 0;
    bool f = true;
    while (i < s.length()) {
        if (i + 2 < s.length() && s.substr(i, 3) == "144") {
            i += 3;
        }
        else if (i + 1 < s.length() && s.substr(i, 2) == "14") {
            i += 2;
        }
        else if (s[i] == '1') {
            i += 1;
        }
        else {
            f = false;
            break;
        }
    }
    if(f){
        cout << "YES" << "\n";
    }
    else cout << "NO" <<"\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
}
