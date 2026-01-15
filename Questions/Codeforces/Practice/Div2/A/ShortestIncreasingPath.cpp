#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, k;
    cin >> n >> k;
    
    if(n == k || n == k + 1 || k == 1){
        cout<< -1 << "\n";
}
        else if(n < k){
            cout << 2 << "\n";
        }
        else{
            cout << 3 << "\n";
}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
}
