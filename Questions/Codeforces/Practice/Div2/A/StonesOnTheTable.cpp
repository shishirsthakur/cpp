#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int req = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i - 1]) {
            req++;
        }
    }
    
    cout << req << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
       // int t;
       // cin >> t;
    // while(t--) {
        solution();
    // }
}
