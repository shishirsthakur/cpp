#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<long long> pf(n + 1, 0);
    for (int i = 1; i <= n; i++){ 
        pf[i] = pf[i - 1] + arr[i - 1];
    }

    while(q--){
        long long l, r, sum = 0;
        cin >> l >> r;
        cout << (pf[r] - pf[l - 1]) << "\n";
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
