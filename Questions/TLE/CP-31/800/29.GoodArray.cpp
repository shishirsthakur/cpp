#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long int n;
   cin >> n;
   long long arr[n];

   for(int i = 0; i < n; i++){
      cin >> arr[i];

   }
   
   long long req = 0;
   for (long long i = 0; i < n - 1; i++){
      if ((arr[i] % 2) == (arr[i + 1] % 2)){
         req++; 
      }
        }

        cout << req << "\n";
         }


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
        solution();
}
