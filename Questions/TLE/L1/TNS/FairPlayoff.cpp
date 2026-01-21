#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a > b && b > max(c,d) || a < b && a > max(c,d) ){
        cout << "NO" << "\n";
    }
    else if(c > d && d > max(a,b) || c < d && c > max(a,b)){
        cout << "NO" << "\n";
    }

    else cout << "YES" << "\n";
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
