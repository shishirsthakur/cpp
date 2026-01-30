#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<string, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(a.begin(), a.end(), [](pair<string, int>& x, pair<string, int>& y) {
        if (x.second != y.second) {
            return x.second > y.second;
        }
        return x.first < y.first;
    });
    
    for (int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second << "\n";
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
