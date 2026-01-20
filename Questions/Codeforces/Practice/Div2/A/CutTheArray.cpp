#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum  = 0;
    for (int i = 0; i < n; i++) {
        sum+= arr[i];
    }
    if(sum%3 == 0){ 
        cout << 1 << " " << arr.size()-1 << "\n";
    }
    else cout << 0 << " " << 0 << "\n";

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
