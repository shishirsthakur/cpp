#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    int maxdiff = 0;
    for(int i = 0; i< n ; i++){
        cin >> arr[i];
    }
    maxdiff = max(maxdiff, arr[0]);
    for(int i = 1; i < n; i++){
        maxdiff = max(maxdiff, arr[i] - arr[i-1]);
    }
    maxdiff = max(maxdiff, 2 * (x - arr[n-1]));
    
    cout << maxdiff << '\n';
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
