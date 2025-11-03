#include <bits/stdc++.h>
using namespace std;


void solution(){
         long long n;
        cin >> n;
        vector<long long> a(n);
        
        for (long long i = 0; i < n - 1; i++){
            cin >> a[i];
        }
        
        long long sum = 0;
        for (long long i = 0; i < n - 1; i++){
            sum += a[i];
        }
        
        cout << -1 * sum << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--){
   solution();
   

    }
    }
