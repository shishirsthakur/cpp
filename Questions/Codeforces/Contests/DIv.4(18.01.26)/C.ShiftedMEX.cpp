#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<long long> s;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }
    vector<long long> arr(s.begin(), s.end());
    int req = 0;
    for (long long x : arr) {
        long long check = -x;
        int mex = 0;
        for (long long x : arr) {
            if (x + check == mex) {
                mex++;
            }
        }
        req = max(req, mex);
    }
    
    cout << req << "\n";
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
