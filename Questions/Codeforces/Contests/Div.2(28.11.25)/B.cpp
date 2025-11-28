#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n;
        cin >> n;
        long long sum = 0;
        int z = 0;
        for (int i = 0; i < n; ++i) {
            int b;
            cin >> b;
            sum += b;
            if (b == 0){
                z+=1;
            }
        }
        int p = n - z;
        long long k = sum - n + 1;
        long long ans = min((long long)p, k);
        cout << ans << '\n';
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
