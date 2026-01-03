#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long a, b , c, d;
    cin >> a >> b >> c >> d;
    long long count = 0;
    if(a < b){
        count++;
    }
    if(a < c){
        count++;
    }
    if(a < d){
        count++;
    }
    cout << count << "\n";
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
