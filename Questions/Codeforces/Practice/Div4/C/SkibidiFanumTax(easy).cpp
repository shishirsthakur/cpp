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
    
    vector<int> v;
    for(int i = 0; i < n; i++) {
        v.push_back(a[i]);
        v.push_back(b[0] - a[i]);
    }
    
    sort(v.begin(), v.end());
    
    vector<int> c(n);
    int idx = 0;
    for(int i = 0; i < n; i++) {
        while(idx < v.size()) {
            if(v[idx] == a[i] || v[idx] == b[0] - a[i]) {
                c[i] = v[idx];
                idx++;
                break;
            }
            idx++;
        }
    }
    
    bool ok = true;
    for(int i = 1; i < n; i++) {
        if(c[i] < c[i-1]) {
            ok = false;
            break;
        }
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
