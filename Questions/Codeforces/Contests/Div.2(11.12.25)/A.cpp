#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n;
        cin >> n;
        long long arr[n];
        vector<long long> pfx(n + 1, 0);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long int count = 0;
        long long maxm = arr[0];
        for (int i = 1; i < n; i++){
        if (maxm > arr[i]){
            count++;
        }
        maxm = max(maxm, arr[i]);
    }
        cout << count << "\n";
        
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
