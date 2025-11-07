#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n; 
    cin >> n;
    vector<long long> arr(n), arr2;
    for(int i = 0; i < n; i++){
     cin >> arr[i];
}
  arr2.push_back(arr[0]);

        for (int i = 1; i < n; i++){
if (arr[i] >= arr[i - 1]){
    arr2.push_back(arr[i]);
}
  else{
  arr2.push_back(arr[i]);
  arr2.push_back(arr[i]);
}
}

cout << arr2.size() << endl; 

        for (auto i : arr2){
            cout << i << " ";
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
    return 0;
}
