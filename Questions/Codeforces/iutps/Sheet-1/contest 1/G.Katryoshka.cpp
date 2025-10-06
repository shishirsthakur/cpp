#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, m, k;
    cin >> n >> m >> k;
    
    long long maxCount = 0;
  
    
    for(long long r1 = 0; r1 <= min(n/2, k); r1++) {
       
        for(long long r2 = 0; r2 <= min({(n - 2*r1)/2, m, k - r1}); r2++) {
            
            long long remE = n - 2*r1 - 2*r2;
            long long remM = m - r2;
            long long remB = k - r1 - r2;
            
           
            long long r3 = min({remE, remM, remB});
            
            
            long long total = r1 + r2 + r3;
            maxCount = max(maxCount, total);
        }
    }
    
    cout << maxCount << endl;
    return 0;
}
