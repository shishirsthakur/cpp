#include <bits/stdc++.h>
using namespace std;

void solution() {
    string cf = "codeforces";
    char c;
    cin >> c;
    if(cf.find(c) != string::npos){
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
