#include <bits/stdc++.h>
using namespace std;

void solve() {
      int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());

    while (q--) {
        string s;
        long long x;
        cin >> s >> x;

        if (s == "lower_bound") {
            auto it = lower_bound(a.begin(), a.end(), x);
            if (it == a.end()) {
                cout << -1 << "\n";
            } else {
                cout << *it << "\n";
            }
        } else if (s == "upper_bound") {
            auto it = upper_bound(a.begin(), a.end(), x);
            if (it == a.end()) {
                cout << -1 << "\n";
            } else {
                cout << *it << "\n";
            }
        } else if (s == "binary_search") {
            if (binary_search(a.begin(), a.end(), x)) {
                cout << "found\n";

        }else { 
    cout << "not found\n";
            }
        }
    }
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
