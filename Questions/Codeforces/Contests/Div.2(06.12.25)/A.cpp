#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    
    map<int, int> c;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        c[a]++;
    }
    
    while (true) {
        int dist = c.size();
        
        if (c.count(dist)) {
            cout << dist << "\n";
            break;
        }
        
        c[dist] = 1;
    }
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
