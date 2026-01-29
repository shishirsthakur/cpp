#include <bits/stdc++.h>
using namespace std;

void solve() {
            int n;
            cin >> n;
            int k = (n + 1) / 2;
            vector<int> p;
            p.reserve(n);
            p.push_back(k);

            for (int d = 1; d <= n - 1; d++) {
                if (n % 2 == 0) {
                    if (d % 2 == 1){
                     p.push_back(k + (d + 1) / 2);
                 }else p.push_back(k - d / 2);
                }
                 else {
                    if (d % 2 == 1) p.push_back(k - (d + 1) / 2);
                 else p.push_back(k + d / 2);
                }
            }
            for (int i = 0; i < n; i++) {
                cout << p[i] << (i + 1 == n ? '\n' : ' ');
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
