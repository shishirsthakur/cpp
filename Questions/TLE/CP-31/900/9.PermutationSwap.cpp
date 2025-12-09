#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long int s = abs(arr[0] - 1);

        for (int i = 1; i < n; i++){
            s = __gcd(s, abs(arr[i] - (i + 1)));
        }
        cout << s << "\n";
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
