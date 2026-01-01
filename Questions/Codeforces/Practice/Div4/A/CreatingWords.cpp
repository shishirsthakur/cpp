#include <bits/stdc++.h>
using namespace std;

void solution() {
    string a, b;
    cin >> a >> b;
    char fir = a[0];
    char sec = b[0];
    a[0] = sec;
    b[0] = fir;
    cout << a << " " << b << "\n";
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
