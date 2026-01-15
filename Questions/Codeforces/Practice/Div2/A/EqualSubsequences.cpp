#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n-k; i++) {
        cout << 0;
    }
        for (int i = 0; i < k; i++) {
            cout << 1;
    }
        cout << "\n";
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
