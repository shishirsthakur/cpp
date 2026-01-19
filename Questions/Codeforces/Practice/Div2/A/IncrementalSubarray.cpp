#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(m + 1, 0);
    for (int i = 1; i <= m; i++) {
        cin >> arr[i];
    }
    int count = n - arr[m] + 1;
    for (int i = 2; i <= m; i++) {
        if (arr[i] == 1) {
            count = 1;
        }
    }
    
    cout << count << "\n";
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
