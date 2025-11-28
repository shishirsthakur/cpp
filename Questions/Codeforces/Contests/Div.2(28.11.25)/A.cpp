#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
        cin >> n;
        
        long long mx = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                long long cell_value = i * n + j + 1;
                long long cost = cell_value;
                if(i > 0) {
                    cost += (i-1) * n + j + 1;
                }
                if(i < n - 1) {
                    cost += (i+1) * n + j + 1;
                }
                if(j > 0) {
                    cost += i * n + (j-1) + 1;
                }
                if(j < n - 1) {
                    cost += i * n + (j+1) + 1;
                }
                
                mx = max(mx, cost);
            }
        }
        
        cout << mx << "\n";
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
