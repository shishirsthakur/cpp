#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n;
    cin >> n;
    vector<long long> a(n), b(n), arr(n);
    for (int i = 0; i < n; i++){
     cin >> a[i];
    }
    for (int i = 0; i < n; i++){
     cin >> b[i];
    }
    for (int i = 0; i < n; i++){
     arr[i] = a[i] - b[i];
    }
    sort(arr.begin(), arr.end());
    long long req = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        if (arr[l] + arr[r] > 0) {
            req += (r - l);
            r--;
        } else {
            l++;
        }
    }

    cout << req << "\n";
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
