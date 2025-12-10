#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, q;
        cin >> n >> q;
        long long arr[n];
        vector<long long> pfx(n + 1, 0);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long s = 0;
        for (int i = 0; i < n; i++){
            s += arr[i];
        }
        for (int i = 1; i <= n; i++) {
            pfx[i] = pfx[i - 1] + arr[i - 1];
            }
            while (q--){
            long long l, r, k;
             cin >> l >> r >> k;
             long long rem = pfx[r] - pfx[l - 1];
             long long add = (r - l + 1) * k;
             long long sum = s - rem + add;
              if (sum % 2 == 1){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }

        }
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
