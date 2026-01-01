#include <bits/stdc++.h>
using namespace std;

void solution() {
   long a, b , c;
   cin >> a >> b >> c;
   if( a < b && b < c){
    cout << "STAIR" << "\n";
    }
    else if( a < b && c < b){
    cout << "PEAK" << "\n";
    }
    else cout << "NONE" << "\n";
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
