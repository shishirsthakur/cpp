#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];

        vector<int> a(n, 0);
        long long last = 0;
        int next = 1;

        for (int i = 0; i < n; ++i) {
            long long d = b[i] - last;     
            last = b[i];
            long long prev = (i + 1) - d;     

            if (prev == 0) {
                a[i] = next++;
            } else {
               
                a[i] = a[(int)prev - 1];
            }
        }

        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
