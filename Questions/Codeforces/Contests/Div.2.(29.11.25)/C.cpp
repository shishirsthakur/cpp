#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long arr2[n];
    for(long long i = 0; i < n; i++){
        cin >> arr2[i];
    }
    long long l[n], r[n];
    l[0] = arr[0];
    long long total = arr[0];
    for(int i = 1; i < n; i++){
        l[i] = max(arr[i], l[i-1] + arr[i]);
        total = max(total, l[i]);
    }
    r[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        r[i] = max(arr[i], r[i+1] + arr[i]);
    }
    
    long long req;
    if(k % 2 == 0){
        req = total;
    }
    else{
        req = total;
        for(int i = 0; i < n; i++){
            long long curr = l[i] + r[i] - arr[i];
            long long rn = curr + arr2[i];
            req = max(req, rn);
        }
    }
    
    cout << req << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
