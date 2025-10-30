#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        long long r0, x, d;
        cin >> r0 >> x >> d >> n;
        string s;
        cin >> s;

        long long min = r0;
        long long max = r0;
        long long rated = 0;

        for (long long i = 0; i < n; ++i) {
            bool rate = false;

            if (s[i] == '1') {
                rate = true;
            } else {
                if (min < x) {
                    rate = true;
                }
            }

            if (rate) {
                rated++;
                min = (min - d >  0) ? (min - d) : 0;
                max = max + d;
            }
        }

        cout << rated << '\n';




    }

}
