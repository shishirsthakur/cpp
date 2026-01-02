#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long a, b, c;
    cin >> a >> b >>c;
    if(a+b >= 10 || b+c >= 10 || a+c >= 10 ){
        cout << "Yes" << "\n";
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
