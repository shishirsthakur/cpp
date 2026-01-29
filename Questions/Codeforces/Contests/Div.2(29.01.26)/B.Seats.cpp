#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> o;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') o.push_back(i);
    }
    if (o.empty()) {
        cout << (n + 2) / 3 << "\n";
        return;
    }
    long long sum = 0;
    int k = (int)o.size();
    int m = o[0];
    sum += (m + 1) / 3;

    for (int i = 0; i + 1 < k; i++) {
        int g = o[i + 1] - o[i] - 1;
        sum += g / 3;
    }

    int tr = (n - 1) - o.back();
    sum += (tr + 1) / 3;
    cout << (long long)k + sum << "\n";
        }
    

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
