    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        string s;
        cin >> s;
     
        bool f = true;
        for (int i = 1; i < (int)s.size(); ++i) {
            if (s[i] != s[0]) {
                f = false;
                break;
            }
        }
     
        if (f) cout << 1 << "\n";
        else cout << 2 << "\n";
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