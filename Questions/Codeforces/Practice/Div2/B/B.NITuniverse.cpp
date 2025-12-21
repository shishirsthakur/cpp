    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
     
        bool z = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                z = false;
                break;
            }
        }
     
        if (z) {
            cout << 0 << "\n";
            return;
        }
     
        int L = 0, R = n - 1;
        while (L < n && arr[L] == 0) L++;
        while (R >= 0 && arr[R] == 0) R--;
     
        bool f = false;
        for (int i = L; i <= R; i++) {
            if (arr[i] == 0) {
                f = true;
                break;
            }
        }
     
        if (!f) cout << 1 << "\n";
        else cout << 2 << "\n";
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