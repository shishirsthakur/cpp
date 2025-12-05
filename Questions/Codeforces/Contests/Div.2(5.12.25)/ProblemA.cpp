#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    int sol = 0;
    int a = -1;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            int slover = i + k;
            if (slover > a) {
                a = slover;
            }
        }
        
        if (i > a) {
            sol++;
        }
    }
    
    cout << sol << "\n";
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
