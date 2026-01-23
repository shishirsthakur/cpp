#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h, l;
    cin >> n >> h >> l;
    int t = 0;
    int ch = 0;
    int cl = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        bool r = (a <= h);
        bool c = (a <= l);
        if (r && c) {
            t++;
        } else if (r) {
            ch++;
        } else if (c) {
            cl++;
        }
    }
    
    int req = min(ch, cl);
    int rem = (ch + cl) - (2 *req);
    int rc = min(rem, t);
    req += rc;
    t -= rc;
    req += t / 2;
    cout << req << "\n";
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
