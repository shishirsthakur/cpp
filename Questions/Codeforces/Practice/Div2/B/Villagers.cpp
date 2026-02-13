#include <bits/stdc++.h>
using namespace std;

void solve() {
     int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
     cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long req = 0;
    int f = (n % 2 == 1 ? 0 : 1);
    for (int i = f; i < n; i += 2){
        req += arr[i];
    }
    cout << req << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
     solve();
}
}
