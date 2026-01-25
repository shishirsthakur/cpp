#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    for(int i = 0; i< n; i++){
        cin >> b[i];
    }
     vector<long long> maxm(n);
    maxm[n-1] = max(a[n-1], b[n-1]);
    for(int i = n-2; i >= 0; i--){
        maxm[i] = max({(long long)a[i], (long long)b[i], maxm[i+1]});
    }
     vector<long long> pf(n+1, 0);
    for(int i = 0; i < n; i++){
        pf[i+1] = pf[i] + maxm[i];
    }
    while(q--){
        long long l, r;
        cin >> l >> r;
        l--; r--;
        long long sum = pf[r+1] - pf[l];
        cout << sum << " ";
    }
    cout << "\n";
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
