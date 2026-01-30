#include <bits/stdc++.h>
using namespace std;

void solve() {
      int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    while (q--) {
        string op;
        int x;
        cin >> op >> x;

        if (op == "next_permutation") {
            for (int i = 0; i < x; i++) {
                next_permutation(s.begin(), s.end());
            }
        } else if (op == "prev_permutation") {
            for (int i = 0; i < x; i++) {
                prev_permutation(s.begin(), s.end());
            }
        }

        cout << s << "\n";
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
