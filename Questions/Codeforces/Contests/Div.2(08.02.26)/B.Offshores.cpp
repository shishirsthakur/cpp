#include <bits/stdc++.h>
using namespace std;

void solve() {
long long n, x,y;
cin >> n >> x >> y;
vector<int> arr(n);
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
long long sum = 0;
    for (int i = 0; i < n; i++){ 
    sum +=arr[i]/x;
}  

    long long sol = 0;
    for (int i = 0; i < n; i++) {
        long long req = arr[i]+(sum-(arr[i]/x))*y; 
        sol = max(sol, req);
    }

    cout << sol << "\n";
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
