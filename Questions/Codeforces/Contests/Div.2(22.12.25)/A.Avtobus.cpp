    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long n;
        cin >> n;
     
        if (n < 4 || n % 2 == 1) {
            cout << -1 << "\n";
            return;
        }
     
        long long minm = (n + 5) / 6;
        long long maxm = n / 4;
     
        cout << minm << " " << maxm << "\n";
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        long long t;
        cin >> t;
        while (t--) {
            solution();
        }
    }