#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n;
    cin >> n;
    vector<pair<long long,long long>> arr(n);
    for (int i = 0; i < n; i++){
     cin >> arr[i].first >> arr[i].second;
 }
 sort(arr.begin(), arr.end());
    vector<pair<long long,long long>> req;
    long long l = arr[0].first;
    long long r = arr[0].second;
    for (int i = 1; i < n; i++) {
        if (arr[i].first <= r) {
            r = max(r, arr[i].second);
        } else {
            req.push_back({l, r});
            l = arr[i].first;
            r = arr[i].second;
        }
    }
    req.push_back({l, r});
    for (auto &p : req){
     cout << p.first << " " << p.second << "\n";
    }
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
