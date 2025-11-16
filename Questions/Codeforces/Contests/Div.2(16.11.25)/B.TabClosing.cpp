#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long a, b, n;
   cin >> a >> b >> n;
   long long c = a / b;
        if(n <= c) {
            cout << '1' << '\n';
        } else {
            if((a % b == 0) && (c == 1)) {
                cout << '1' << '\n';
            } else {
                cout << '2' << '\n';
            }
        }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
