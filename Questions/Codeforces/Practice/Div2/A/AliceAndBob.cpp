#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, a;
    cin >> n >> a;
    
    vector<int> arr(n);
    int l = 0, r = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(a > arr[i]) l++;
        if(a < arr[i]) r++;
    }
    
    int ans = (l > r ? a - 1 : a + 1);
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
}
