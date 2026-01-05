#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    int q = 0;
    int req = 1;
    
    for(int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;

        if(a <= 10 && b > q){
            q = b;
            req = i;
        }
    }
    
    cout << req << "\n";
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
