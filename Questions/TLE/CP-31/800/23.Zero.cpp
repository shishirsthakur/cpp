#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long n;
   cin >> n;
   long long arr[n];
   for (int i = 0; i < n; i++){
    cin >> arr[i];
    }
    long long x = 0;
    for (int i = 0; i < n; i++){
    x ^= arr[i];
    }
    if (n % 2 == 1){
    cout << x << "\n";
}

        else {
        if (x == 0){
            cout << x << "\n";
        }
        else{
            cout << -1 << "\n";
        }

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
