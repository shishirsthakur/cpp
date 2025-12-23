    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        long long soln = max(arr[0], arr[1]- arr[0]);
        cout << soln << "\n";
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