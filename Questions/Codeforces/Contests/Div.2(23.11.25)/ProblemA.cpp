#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long int n;
   cin >> n;
   long long arr[n];
   
   long long maxm = 0;
   for(int i = 0; i < n; i++){
      cin >> arr[i];
      maxm = max(maxm, arr[i]);
   }
   
   long long freq[maxm + 1] = {0};
   
   for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
   }
   
   long long req = 0;
   
   for(long long i = 0; i <= maxm; i++){
      if(freq[i] > 0){
         if(freq[i] >= i){
            req += (freq[i] - i);
         } else {
            req += freq[i];
         }
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
