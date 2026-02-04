#include <bits/stdc++.h>
using namespace std;

void solve() {
             long long x, y, n; 
             long long a = 0;
             long long b = 0;
             cin >> n >> x >> y;
             x = abs(x); 
             y = abs(y);
             string s; 
             cin >> s; 
            for (long long i = 0; i < n; i++) {
            if(s[i] == '4'){
                a++; 
            }
            else b++;
        }
        if (a+2*b>=x+y && a+b>=max(x,y)){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
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
