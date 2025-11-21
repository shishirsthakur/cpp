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
    long long two = 0;
    long long currtwo = 0;
    for (long long i = 0; i < n; i++){

            if (arr[i] == 2){
            two++;
            }
         }


        long long sol = -1;
         for (long long i = 0; i < n; i++){

            if (arr[i] == 2){
               currtwo++;
            }
            if ((currtwo) == (two - currtwo)){
                 sol = i + 1;
                 break;
              }

        }


        cout << sol << "\n";

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
