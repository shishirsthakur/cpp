#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long c = 0;
      for(long long i = 0; i < n; i++){
        c += arr[i];
    }
    if(c%2 != 0){
        cout << "NO" << "\n" ;
    }
    else cout << "YES" << "\n" ;

    }
    



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
