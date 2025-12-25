include <bits/stdc++.h>
using namespace std;
 
void solution() {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) cin >> arr[i];
    vector<pair<long long, long long>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({arr[i], i});
    }
    sort(v.rbegin(), v.rend());
    vector<long long> ans(n + 1, 0);
    ans[0] = 0;
    long long t = 0;
    long long pos = 1;
    for (int i = 0; i < n; i++) {
        ans[v[i].second + 1] = pos;
        t += (2 * abs(pos) * v[i].first);
        if (pos < 0) pos = abs(pos) + 1;
        else pos = -pos;
    }
    
    cout << t << "\n";
    for (int i = 0; i <= n; i++){
 cout << ans[i] << " ";
}
    cout << "\n";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}