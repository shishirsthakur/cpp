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
   if(arr[0] == -1 && arr[n-1] == -1){
      bool b = true;
      for(int i = 0; i < n; i++){
         if(arr[i] != -1){
            b = false;
            break;
         }
      }
      
      if(b){
         for(int i = 0; i < n; i++){
            arr[i] = 0;
         }
      } else {
         arr[0] = 0;
         arr[n-1] = 0;
      }
   } else if(arr[0] == -1){
      arr[0] = arr[n-1];
   } else if(arr[n-1] == -1){
      arr[n-1] = arr[0];
   }
   for(int i = 0; i < n; i++){
      if(arr[i] == -1){
         arr[i] = 0;
      }
   }
   long long diff= 0;
   for(int i = 0; i < n-1; i++){
      diff += arr[i+1] - arr[i];
   }
   cout << abs(diff) << "\n";
   for(int i = 0; i < n; i++){
      cout << arr[i];
      if(i < n-1) cout << " ";
   }
   cout << "\n";
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
