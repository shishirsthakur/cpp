#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    long long h;
    cin >> h;
    
    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    vector<long long> arr2(n + 1, 0);
    vector<int> stamp(n + 1, -1);
    int rem = 0;
    for (int k = 0; k < m; k++) {
        int a;
        long long b;
        cin >> a >> b;
        if (stamp[a] != rem) {
            stamp[a] = rem;
            arr2[a] = 0;
        }
        arr2[a] += b;
        if (arr[a] + arr2[a] > h) {
            rem++;
        }
    }
    for (int i = 1; i <= n; i++) {
        long long res = arr[i];
        if (stamp[i] == rem) {
            res = res + arr2[i];
        }
        cout << res;
        if (i < n) cout << " ";
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
