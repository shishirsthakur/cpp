#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    for(int i = 0; i < 2*n; i++){
        for(int j = 0; j < 2*n; j++){
        if((i/2 + j/2)%2 == 0){
            cout << '#';
        }
        else cout << ".";
    }
    cout << "\n";
    }
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
