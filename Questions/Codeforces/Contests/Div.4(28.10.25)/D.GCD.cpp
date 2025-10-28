#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int q;
    cin >> q;
    
    while(q--){
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        long long req = -1;
        for(long long x = 2; x <= 1000000; x++){
            for(int i = 0; i < n; i++){
                if(__gcd(arr[i], x) == 1){
                    req = x;
                    break; 
                }
            }
            if(req != -1){
                break;
            }
        }
        
        cout << req << "\n";
    }

}

