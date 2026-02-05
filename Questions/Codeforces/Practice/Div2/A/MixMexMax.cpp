#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
     int req = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) continue;
        if (arr[i] == 0) {
            cout << "NO\n";
            return;
        }
        if (req == -1) req = arr[i];
        else if (arr[i] != req) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
