    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long n;
        cin >> n;
        long long arr[n];
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        long long maxm = 0;
        
        for (int i = 0; i < n - 1; i++) {
            maxm += abs(arr[i + 1] - arr[i]);
        }
        
        long long less = 0;
        
        if (n > 1) {
            less = max(less, (long long)abs(arr[1] - arr[0]));
        }
        
        for (int k = 1; k < n - 1; k++) {
            long long rem = abs(arr[k] - arr[k - 1]) + abs(arr[k + 1] - arr[k]);
            long long add = abs(arr[k + 1] - arr[k - 1]);
            long long currless = rem - add;
            less = max(less, currless);
        }
        
        if (n > 1) {
            less = max(less, (long long)abs(arr[n - 1] - arr[n - 2]));
        }
        
        long long soln = maxm - less;
        cout << soln << endl;
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