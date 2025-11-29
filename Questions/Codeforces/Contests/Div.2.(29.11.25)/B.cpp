#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n;
    cin >> n;
    long long c = 2*n+1;
    vector<int> fr(c, 0);
    vector<int> a(2*n);
    
    for(int i = 0; i < 2*n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 2*n; i++){
        fr[a[i]]++;
    }
    
    int even = 0;
    int odd = 0;
    int req;
    
    for(int i = 1; i < c; i++){
        if(fr[i] > 0){
            if(fr[i] % 2 == 0){
                even++;
            }
            else {
                odd++;
            }
        }
    }
    
    if (odd > 0) {
        int p = min(even, (int)n);
        req = min((int)(2*n), odd + 2*p);
    } else {
        int p = min(even, (int)n);
        if ((n - p) % 2 != 0){
          --p;  
        } 
        req = 2 * p;
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
