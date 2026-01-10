#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, m;
    cin >> n >> m;
    if(m == 1){
        cout << "NO\n";
    }
    else{
    long long first = n;
    long long second = n*m;
    long long third = first + second;
    cout << "YES\n" << first <<" " <<second << " " << third << "\n";
}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    solution();
}
}
