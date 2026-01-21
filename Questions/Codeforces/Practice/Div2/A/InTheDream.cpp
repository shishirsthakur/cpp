#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int minf = min(a, b);
    int maxf = max(a, b);
    int mins = min(c - a, d - b);
    int maxs = max(c - a, d - b);

    if(minf * 2 +2 >= maxf && mins * 2 + 2 >= maxs){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
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
