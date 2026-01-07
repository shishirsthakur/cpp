    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long int n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        set<long long> s;
        
        for(long long i = 0; i < n; i++){
            cin >> arr[i];
            s.insert(arr[i]);
        }
        
        long long ct = 0;
        while(s.count(ct)){
            ct++;
        }
        
        long long req = min(ct, k - 1);
        
        cout << req << "\n";
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
