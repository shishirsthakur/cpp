#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector<long long> b(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    
    vector<long long> arr(n + 2, 0);
    vector<long long> arr2(n + 2, 0);
    
    arr[n + 1] = 0;
    arr2[n + 1] = -4e18;
    
    for (int i = n; i >= 1; i--) {
        arr[i] = max(-a[i] + arr[i + 1], -b[i] + arr2[i + 1]);
        arr2[i] = max(a[i] + arr2[i + 1], b[i] + arr[i + 1]);
    }
    
    cout << max(arr[1], arr2[1]) << "\n";
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
