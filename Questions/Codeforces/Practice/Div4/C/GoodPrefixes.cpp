#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long sum = 0;
    long long maxm = 0;
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        sum += a[i];
        maxm = max(maxm, a[i]);
        
        if(sum - maxm == maxm) {
            count++;
        }
    }
    
    cout << count << "\n";
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
