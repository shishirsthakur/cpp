#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long a, b, c;
    cin >> a >> b >> c;
    if(a+b == c){
        cout << "+" << "\n";
    }
    else cout << "-" << "\n";
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
