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
    sort(arr, arr + n);
    long long max = arr[n - 1];
    long long min = arr[0];
    if (max == min){
      cout << "NO" << "\n";
   }
else{

            cout << "YES" << "\n";
            cout << max << " ";
            for (int i = 0; i < n - 1; i++){
               cout << arr[i] << " ";
            }
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
