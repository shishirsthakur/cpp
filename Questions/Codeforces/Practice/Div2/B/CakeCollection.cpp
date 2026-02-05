#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++){
     cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long k = min<long long>(n, m);
    long long req = 0;

    for (long long i = 0; i < k; i++) {
        long long r =arr[n-1-i];
        long long t=m-i;
        req += r*t;
    }
    cout << req << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
     solve();
}
}
