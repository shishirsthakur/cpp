#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, k, x;;
    cin >> n >> k >> x;
     long long minm = (k *(k+1)/2);
     long long maxm = (n*(n+1)/2) - ((n-k) * (n-k+1)/2);
     if( x >= minm && x<= maxm){
        cout << "YES" << "\n";
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
