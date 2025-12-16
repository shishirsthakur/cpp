#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    
    int lm = -m / 2;
    int rm = lm + m;
    
    if (rm > r) {
        rm = r;
        lm = r - m;
    } else if (lm < l) {
        lm = l;
        rm = l + m;
    }
    
    cout << lm << " " << rm << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}
