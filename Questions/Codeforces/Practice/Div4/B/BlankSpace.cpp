#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int req = 0;
    int curr = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            curr++;
        }
        else{
            req = max(req, curr);
            curr = 0;
        }
    }
    req = max(req, curr);
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
