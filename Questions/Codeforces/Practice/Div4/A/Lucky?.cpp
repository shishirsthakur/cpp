#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    int fir = int(s[0]) + int(s[1])+ int(s[2]);
    int sec = int(s[3]) + int(s[4])+ int(s[5]);
    if(fir == sec){
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
