#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<char> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    char req = arr[0];
    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]){
            req = arr[i+1];
        }
    }
    
    cout << (int)req - 96 << "\n";  // Distance from 'a'
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
