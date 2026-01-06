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
    bool f = true;
    
    for(int i = 0; i < n-1; i++){
        if(arr[i] == arr[i+1]){
            f = false;
            break;
    }
    
}

if(f){
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
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
