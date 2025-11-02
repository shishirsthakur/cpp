#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int minelem = *min_element(arr, arr+n);
    bool sort = true;
   if(minelem != arr[0]){
        sort = false;
 }
    //  else if(is_sorted(arr, arr+n)) {
    //     sort = true;
    // }
    
    
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
