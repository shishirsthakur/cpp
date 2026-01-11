#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    
    int n = s.length();
    bool ok = true;
    
    for(int i = 0; i < n - 1; i++) {
        if(s[i] != '<' && s[i + 1] != '>') {
            ok = false;
            break;
        }
    }
    
    if(!ok) {
        cout << -1 << "\n";
    } else {
        int cnt_l = 0, cnt_r = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '<') cnt_l++;
            if(s[i] == '>') cnt_r++;
        }
        int ans = n - min(cnt_l, cnt_r);
        cout << ans << "\n";
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
