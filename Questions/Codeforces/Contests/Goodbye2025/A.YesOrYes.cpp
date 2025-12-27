    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        string s;
        cin >> s;
        int cnt = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'Y') cnt++;
        }
        
        if (cnt <= 1) cout << "YES" << "\n";
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