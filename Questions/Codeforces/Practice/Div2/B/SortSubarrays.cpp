#include <bits/stdc++.h>
using namespace std;

void solve() {
long long n;
    cin >> n;
    vector<long long> arr(n), arr2(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cin >> arr2[i];
    int l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr2[i]) {
            if (l == -1) l = i;
            r = i;
        }
    }

    int i = l - 1;
    while (i >= 0 && arr2[i] <= arr2[i + 1]) i--;
    l = i + 1;
    int j = r + 1;
    while (j < n && arr2[j] >= arr2[j - 1]) j++;
    r = j - 1;
    cout << l + 1 << " " << r + 1 << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
     solve();
}
}
