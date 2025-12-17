    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
     cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) arr[i]++;
        }
        
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] % arr[i] == 0) arr[i + 1]++;
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
        return 0;
    }