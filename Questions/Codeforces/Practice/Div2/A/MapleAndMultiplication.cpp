#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
     if(n == m){
        cout << 0 << "\n";
    }
    else if(m%n == 0 || n%m == 0){
        cout << 1 << "\n";
    }
    
    else{
        cout << 2 << "\n";
    }
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
