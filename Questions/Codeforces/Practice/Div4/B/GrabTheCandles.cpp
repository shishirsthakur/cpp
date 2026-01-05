#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int m = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            m+=arr[i];
        }
        else b += arr[i];
    }
    if(m > b){
        cout << "YES" << "\n";
    }
    else cout << "NO" << '\n';
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
