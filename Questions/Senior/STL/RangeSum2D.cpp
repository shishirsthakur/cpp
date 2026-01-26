#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, m, q;
    cin >> n >> m >> q;
    vector<vector<long long>> arr(n, vector<long long>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        cin >> arr[i][j];
    }
    }
    vector<vector<long long>> pf(n + 1, vector<long long>(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pf[i][j] = arr[i - 1][j - 1] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long req = pf[x2][y2] - pf[x1 - 1][y2] - pf[x2][y1 - 1]+ pf[x1 - 1][y1 - 1];
        cout << req << "\n";
}
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
