#include <bits/stdc++.h>
using namespace std;
const long long m = 1000000007;

void solve() {
long long n;
    cin >> n;
    long long req = ((((n * (n + 1)) % m) * (4 * n - 1)) % m * 337) % m;
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
