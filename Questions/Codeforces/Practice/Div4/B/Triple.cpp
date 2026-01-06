#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int req = -1;
    int count = 1;
    for(int i = 0; i < n - 2; i++){
        if(arr[i] == arr[i+1] && arr[i] == arr[i+2]){
            req = arr[i];  
            break;
            }      
    }
    cout << req << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}
