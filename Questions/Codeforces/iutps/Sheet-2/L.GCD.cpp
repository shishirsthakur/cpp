#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
   int n, o;
   cin >> n >>o;
   int gcd = 0;
  
   int maximum = max(n, o);
   for(int i = 1; i <= maximum; i++){
    if(n%i == 0 && o%i ==0 ){
        gcd = i;
    }
   }
   cout << gcd;
}
