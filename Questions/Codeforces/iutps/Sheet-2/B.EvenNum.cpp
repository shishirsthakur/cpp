#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
       int a;
       cin >> a;
       if(a<2){
        cout << "-1";
       }
       else {
       int i = 2;

       while(i<=a){
         cout << i << endl;
         i+=2;
       }
   }
}