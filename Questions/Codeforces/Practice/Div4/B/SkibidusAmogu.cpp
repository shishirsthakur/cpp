      #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        string s;
        cin >> s;
     
        bool f = false;
        for (int i = 0; i < (int)s.size() - 1; ++i) {
            if (s[i] == s[i+1]) {
                f = true;
                break;
            }
        }
     
        if (f) cout << 1 << "\n";
        else cout << (int)s.size() << "\n";
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