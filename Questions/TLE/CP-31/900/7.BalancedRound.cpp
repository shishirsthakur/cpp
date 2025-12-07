#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++){
                    cin >> arr[i];
                }
        sort(arr.begin(), arr.end());
        long long count = 1;
        long long l = 1;
        for (int i = 1; i < n; i++){
            if (arr[i] - arr[i - 1] <= k)
                count++; 
            else
                count = 1;
            l = max(l, count);

        }
         cout << n - l << "\n";
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
