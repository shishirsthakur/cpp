#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long n;
   cin >> n;
   char arr[n];
   for(int i = 0; i < n; i++){
    cin >> arr[i];
   }
long long maxf = 0;
for (int i = 0; i < n - 1; i++) {
            if (arr[i] != arr[n - 1]) {
                maxf++;
            }
    }
    
cout << maxf << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
