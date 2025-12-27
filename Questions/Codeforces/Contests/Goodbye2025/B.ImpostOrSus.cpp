    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0;
        
        for (int i = 0; i < n; ) {
            if (s[i] == 's') {
                i++;
                continue;
            }
            
            int end = i;
            while (end < n && s[end] == 'u') end++;
            
            int cnt = end - i;
            int edge = 0;
            if (i == 0) edge++;
            if (end == n) edge++;
            
            int mid = cnt - edge;
            if (mid < 0) mid = 0;
            
            ans += edge + mid / 2;
            i = end;
        }
        
        cout << ans << "\n";
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