#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long n, a, b;
    cin >> n >> a >> b;
        if (a + b + 2 <= n || (a == b && a == n)){
            cout << "Yes" << "\n";
        }else{
        cout << "No" << "\n";
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
