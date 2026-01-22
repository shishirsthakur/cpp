#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i * i <= a; i++) {
        int j = a - i * i;
        if (i + j * j == b) {
            count++;
        }
    }
    
    cout << count << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
}
