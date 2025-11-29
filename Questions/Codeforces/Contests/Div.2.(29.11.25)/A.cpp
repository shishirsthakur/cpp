#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, r, y;
        cin >> n >> y >> r;
        long long yelim = y/2;
        long long elim = yelim + r;
        if(elim > n){
            cout << n << "\n";
        }
        else cout << elim << "\n";
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
