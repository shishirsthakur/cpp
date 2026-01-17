#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << "YES\n";
        return;
    }
    int z = 0;
    int ct = 0;  
    for (int x : a) {
        if (x == 0) {
            z++;
        }
        if (x == 1) {
            ct++;
        }
    }
    if (z == 0) {
        cout << "NO\n";
        return;
    }
    
    if (z > 1 && ct == 0) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
