#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }

    vector<int> ct(mx + 1, 0);
    for (int i = 0; i < n; i++){ 
        ct[a[i]]++;
}
    vector<int> req;
    for (int i = 0; i < n; i++) {
        ct[a[i]]--;
        long long f = sum - a[i];
        if (f % 2 == 0) {
            long long need = f / 2;
            if (0 <= need && need <= mx && ct[(int)need] > 0) {
                req.push_back(i + 1);
            }
        }
        ct[a[i]]++;
    }
    cout << req.size() << "\n";
    for (int i = 0; i < (int)req.size(); i++) {
    if (i > 0) cout << ' ';
    cout << req[i];
}
cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
