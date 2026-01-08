#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end());
    
    int prev = INT_MIN;
    bool ok = true;
    
    for(int i = 0; i < n; i++) {
        int c = INT_MAX;
        
        if(a[i] >= prev) {
            c = a[i];
        }
        
        int need = prev + a[i];
        int idx = lower_bound(b.begin(), b.end(), need) - b.begin();
        
        if(idx < m) {
            int val = b[idx] - a[i];
            if(val >= prev) {
                c = min(c, val);
            }
        }
        
        if(c == INT_MAX) {
            ok = false;
            break;
        }
        
        prev = c;
    }
    
    if(ok) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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
