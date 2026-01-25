#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, s, x;
    cin >> n >> s >> x;
    vector<int> a(n);
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    long long sum = 0;
    for(int i = 0; i< n; i++){
        sum += a[i];
    }
    long long rem = sum - s;
    if(sum == s){
        cout << "YES" << "\n";
        return;
    }
    else if(rem % x == 0 && s > sum){
        cout << "YES" << "\n";
        return;
    }
    else cout << "NO" << "\n";
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
