#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<char> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    char req = 'a';
    for(int i = 0; i < n; i++){
    
            req = max(req, arr[i]);
    }
    
    cout << (int)req - 96 << "\n";
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
