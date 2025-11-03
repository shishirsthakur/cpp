#include <bits/stdc++.h>
using namespace std;



void solution(){
           long long n, x;
           cin >> n >> x;
           long long arr[n];
           for(int i = 0; i < n; i++){
            cin >> arr[i];
           }
           bool present = false;
          for(int i = 0; i < n; i++){
            if(arr[i]==x){
                present = true;
                break;
            }
           }
           if(present){
            cout << "Yes" << "\n";
           }
           else cout << "No" << "\n";
           
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