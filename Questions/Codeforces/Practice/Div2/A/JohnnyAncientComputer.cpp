    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long a, b;
        cin >> a >> b;
        
        long long ra = a;
        long long rb = b;
        
        while (ra % 2 == 0) ra /= 2;
        while (rb % 2 == 0) rb /= 2;
        
        if (ra != rb) {
            cout << -1 << "\n";
            return;
        }
        
        a /= ra;
        b /= rb;
        
        a = log2(a);
        b = log2(b);
        
        long long ans = (abs(a - b) + 2) / 3;
        cout << ans << "\n";
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        long long t;
        cin >> t;
        while (t--) {
            solution();
        }
        return 0;
    }