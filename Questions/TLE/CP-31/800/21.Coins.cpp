#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long n, k;
   cin >> n >> k;
   long long c = n-k;
   if(n%2== 0 || c%2 == 0){
    cout << "YES" << "\n";

   }
   else{
     cout << "NO" << '\n';


   }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
