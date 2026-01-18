#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i< n; i++){
        cin >> arr[i];
    }
    long long maxm = *max_element(arr.begin(), arr.end());
    long long req = 0;
    for(int i = 0; i < n; i++){
        req+=maxm;
    }
    cout << req << "\n";
    }


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
