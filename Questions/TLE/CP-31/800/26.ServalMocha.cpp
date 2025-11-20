#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long int n;
   cin >> n;
   long long arr[n];
   long long int count = 0;
   for(int i =0; i < n; i++){
      cin >> arr[i];
   }
    int a = 0;
    for (int i = 0; i < n; i++){
      for (int j = i + 1; j < n; j++){
         if (__gcd(arr[i], arr[j]) <= 2){
            a = 1; 
         }

         }

        }
        if (a == 0){
         cout << "NO" << "\n";
        }

        else{
         cout << "YES" << "\n";
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
