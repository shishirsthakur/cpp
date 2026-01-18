#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<long long> arr(n);
    vector<long long> sp(m);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> sp[i];
    }
    string ins;
    cin >> ins;
    
    sort(sp.begin(), sp.end());
    vector<int> rm(k + 2, 0), lm(k + 2, 0);
    int curr = 0, mx = 0, mn = 0;
    for(int i = 1; i <= k; i++){
        curr += (ins[i - 1] == 'R') ? 1 : -1;
        if(curr > mx){
            mx = curr;
            rm[mx] = i;
        }
        if(curr < mn){
            mn = curr;
            lm[-mn] = i;
        }
    }
    map<int, int> rem;
for(int i = 0; i < n; i++){
    long long pos = arr[i];
    int b = 1e9;
    int k = lower_bound(sp.begin(), sp.end(), pos) - sp.begin();
    if(k < m){
        long long dist = sp[k] - pos;
        if(dist > 0 && dist <= mx) b = min(b, rm[(int)dist]);
    }
    if(k > 0){
        long long dist = pos - sp[k - 1];
        if(dist > 0 && dist <= -mn) b = min(b, lm[(int)dist]);
    }
    if(b != 1e9) rem[b]++;
}    
    int req = 0;
    for(int i = 1; i <= k; i++){
        req += rem[i];
        cout << (n - req);
        if(i < k) cout << " ";
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
