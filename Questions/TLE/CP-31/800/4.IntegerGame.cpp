#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxelem = *max_element(arr, arr+n);
    bool sort = false;
    if(is_sorted(arr, arr+n)) {
        sort = true;
    }
    
    else if(maxelem == arr[0] || maxelem == arr[n]){
        sort = false;

    }
    if(sort){
        cout << "YES" << "\n";
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
