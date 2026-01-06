#include <bits/stdc++.h>
using namespace std;

void solution() {
    int a, b;
    cin >> a >> b;
    int c = a - (b - 1);
    int d = a - 2 * (b - 1);
    if (c > 0 && c % 2 == 1) {
        cout << "YES" << "\n";
        for (int i = 0; i < b - 1; i++) {
            cout << "1 ";
        }
        cout << c << "\n";
    }
    else if (d > 0 && d % 2 == 0) {
        cout << "YES" << "\n";
        for (int i = 0; i < b - 1; i++) {
            cout << "2 ";
        }
        cout << d << "\n";
    }
    
    else cout << "NO" << "\n";
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
