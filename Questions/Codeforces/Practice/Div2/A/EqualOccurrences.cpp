#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
      vector<int> freq(n, 0);
    for (int i = 0; i < n; i++) {
        freq[arr[i]-1]++;
    }
    sort(freq.begin(), freq.end());
    int count = 0;
    for(int i = 0; i < n; i++){
        count += freq[i];
    }
    int req = count;
    for(int i = 0; i < n; i++){
    req = min(req, count - (n - i) * freq[i]);
}
cout << count - req << "\n";
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
