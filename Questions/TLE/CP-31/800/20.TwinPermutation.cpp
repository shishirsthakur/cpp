#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++){ 
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++){
            cout << n + 1 - arr[i] << " ";

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
