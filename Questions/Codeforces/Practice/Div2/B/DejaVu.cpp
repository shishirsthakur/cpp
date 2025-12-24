    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long n, q;
        cin >> n >> q;
        
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        vector<long long> x(q);
        for (int i = 0; i < q; i++) cin >> x[i];
        
        long long prev = 31;
        
        for (int i = 0; i < q; i++) {
            if (x[i] >= prev) continue;
            
            long long val = pow(2, x[i]);
            
            for (int j = 0; j < n; j++) {
                if (arr[j] % val == 0) {
                    arr[j] += (val / 2);
                }
            }
            
            prev = x[i];
        }
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
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