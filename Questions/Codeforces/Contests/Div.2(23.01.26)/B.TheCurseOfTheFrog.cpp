#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;
    long long sum = 0;
    long long mx = LLONG_MIN;
    for(int i = 0; i < n; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        sum += (b - 1) * a;
        long long val = a * b - c;
        if(val > mx) mx = val;
    }
    if(sum >= x){
        cout << 0 << "\n";
        return;
    }
    
    if(mx <= 0){
        cout << -1 << "\n";
        return;
    }
    
    long long diff = x - sum;
    long long ans = (diff + mx - 1) / mx;
    cout << ans << "\n";

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
