    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        int l, a, b;
        cin >> l >> a >> b;
        
        int g = __gcd(b, l);
        int p = (l - 1 - a) / g;
        int maxm = a + p * g;
        
        cout << maxm << "\n";
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;
        while (t--) {
            solution();
        }
        return 0;
    }
