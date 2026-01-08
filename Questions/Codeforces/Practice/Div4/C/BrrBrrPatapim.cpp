#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    
    vector<vector<int>> g(n + 1, vector<int>(n + 1));
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> g[i][j];
        }
    }
    
    vector<int> p(2 * n + 1);
    set<int> s;
    
    for(int k = 2; k <= 2 * n; k++) {
        int i = 1;
        int j = k - 1;
        
        if(j > n) {
            i = k - n;
            j = n;
        }
        
        p[k] = g[i][j];
        s.insert(g[i][j]);
    }
    
    for(int v = 1; v <= 2 * n; v++) {
        if(s.find(v) == s.end()) {
            p[1] = v;
            break;
        }
    }
    
    for(int i = 1; i <= 2 * n; i++) {
        cout << p[i];
        if(i < 2 * n) cout << " ";
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
