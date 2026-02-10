#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n;
    cin >> n;
    unordered_map<string, int> mp;
    while (n--) {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end()) {
            cout << "OK\n";
            mp[s] = 1;
        } else {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--){
     solve();
// }
}
