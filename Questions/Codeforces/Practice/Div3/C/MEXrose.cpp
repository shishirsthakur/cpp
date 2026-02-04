#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> ct(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ct[x]++;
    }
    int rem = 0;
    for (int i = 0; i < k; i++) {
        if (ct[i] == 0) rem++;
    }
    int ctk = ct[k];
    cout << max(rem, ctk) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    solve();
}
}
