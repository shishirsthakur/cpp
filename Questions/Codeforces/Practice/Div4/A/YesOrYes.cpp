#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    bool right = false;
    if(s[0] == 'y' || s[0] == 'Y' ){
        if(s[1] == 'e' || s[1] == 'E' ){
        if(s[2] == 's' || s[2] == 'S' ){
     right = true;
    }
    }
    }
    if(right){
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
