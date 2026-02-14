#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    string a, b, c;
    cin >> a >> m;
    cin >> b >> c;
    deque<char> dq;
    for (char ch : a){
     dq.push_back(ch);
}
    for (int i = 0; i < m; i++) {
        if (c[i] == 'V') dq.push_front(b[i]);
        else dq.push_back(b[i]);
    }
    while (!dq.empty()) {
        cout << dq.front();
        dq.pop_front();
    }
    cout << "\n";
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
