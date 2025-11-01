#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, k;
    cin >> n >> k;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool sorted = true;
    for(int i = 1; i < n; i++){
        if(arr[i]<arr[i-1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout << "YES" << '\n';
    }
    else if(k >= 2){
       cout << "YES" << '\n';
    }
    else cout << "NO" << "\n";
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
