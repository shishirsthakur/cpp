#include <bits/stdc++.h>
using namespace std;

void solution() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if(a > b) swap(a, b);
    if(c > d) swap(c, d);
    
    bool cb = (c > a && c < b);
    bool db = (d > a && d < b);
    
    if(cb && !db) {
        cout << "YES\n";
    } else if(!cb && db) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
}
