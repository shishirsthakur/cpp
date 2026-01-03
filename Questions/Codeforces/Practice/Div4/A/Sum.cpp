#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long a, b, c;
    cin >> a >> b >> c;
    bool f = false;
    if(a+b == c || a+c == b || b+c == a){
        f = true;
    }
    if(f){
        cout << "YES" << "\n";
    }
    else cout << "NO" <<"\n";
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
