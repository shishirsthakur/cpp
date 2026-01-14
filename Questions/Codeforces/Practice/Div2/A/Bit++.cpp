#include <bits/stdc++.h>
using namespace std;
void solution() {
   int n;
    cin >> n;
    int x = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }
    cout << x << "\n";  
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
