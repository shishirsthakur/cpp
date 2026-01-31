#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> s;
    vector<int> req;
    for (int i = 0; i < n; i++) {
        if (s.find(a[i]) == s.end()) {
            s.insert(a[i]);
            req.push_back(i + 1);
            if (req.size() == k) {
                break;
            }
        }
    }
    if (req.size() == k) {
        cout << "YES\n";
        for (int i = 0; i < k; i++) {
            if (i > 0) cout << " ";
            cout << req[i];
        }
        cout << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
