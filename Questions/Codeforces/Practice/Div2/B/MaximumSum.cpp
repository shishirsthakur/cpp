#include <bits/stdc++.h>
using namespace std;

void solve() {
long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (auto &it : v) cin >> it;
    sort(v.begin(), v.end());
    vector<long long> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++) pre[i] = v[i] + pre[i - 1];
    long long ans = 0;
    for (int first = 0; first <= k; first++) {
        int second = (int)k - first;
        int left = 2 * first;
        int right = (int)n - second - 1;

        long long sum = pre[right] - (left == 0 ? 0 : pre[left - 1]);
        ans = max(ans, sum);
    }
    cout << ans << "\n";
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
