    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        int n;
        cin >> n;
        vector<string> arr(n);
        for (int i = 0; i < n; i++){
         cin >> arr[i];
     }
        
        string s = "";
        
        for (int i = 0; i < n; i++) {
            string a = arr[i] + s;
            string b = s + arr[i];
            
            if (a < b) {
                s = a;
            } else {
                s = b;
            }
        }
        
        cout << s << "\n";
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