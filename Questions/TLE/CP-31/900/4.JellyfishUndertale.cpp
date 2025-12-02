#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long a, b, n;
        cin >> a >> b >> n;
        long long x[n];
        for (int i = 0; i < n; i++){
                    cin >> x[i];
                }
        long long maxm = b;
        for (int i = 0; i < n; i++){
            maxm += min(x[i], a - 1);
        }
        cout << maxm << "\n";

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
