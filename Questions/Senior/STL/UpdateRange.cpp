#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    while(q--){
        long long l, r, v;
        cin >> l >> r >> v;
        l--;
        r--;
        for(long long i = l; i <= r; i++){
         arr[i] = arr[i] + v;
    }
    }
    for(int i = 0; i < n; i++){
         cout << arr[i] << " ";
    }
    cout << "\n";
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
