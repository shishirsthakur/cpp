    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) cin >> v[i];
        
        long long sol = v[n-1] - v[0];
        
        for (int i = 1; i < n; i++)
            sol = max(sol, v[i] - v[0]);
        
        for (int i = 0; i < n-1; i++)
            sol = max(sol, v[n-1] - v[i]);
        
        for (int i = 0; i < n-1; i++)
            sol = max(sol, v[i] - v[i+1]);
        
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