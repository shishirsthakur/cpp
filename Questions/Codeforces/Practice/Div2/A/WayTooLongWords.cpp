#include <bits/stdc++.h>
using namespace std;
void solution() {
        string s;
        cin >> s;
        int len = s.length();
        if(len > 10) {
            cout << s[0] << len - 2 << s[len - 1] << "\n";
        } else {
            cout << s << "\n";
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
