#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long a, b , c;
    cin >> a >> b >> c;
    long long maxm, minm, req;
    maxm = max(a, max(b, c));
    minm = min(a, min(b, c));
    req= (a+b+c)- (maxm+minm);
    cout << req << "\n";
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
