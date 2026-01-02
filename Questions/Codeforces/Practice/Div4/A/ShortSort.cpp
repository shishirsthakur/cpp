#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    if ( s== "abc"||  s== "acb" ||  s== "bac" || s== "cba"){
        cout << "Yes" << "\n";
    }
    else cout << "No" << "\n";
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
