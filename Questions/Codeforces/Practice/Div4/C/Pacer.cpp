#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, m;
    long long last= 0;
    long long curr = 0;
    long long pt = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(y == curr){
            pt += ( x - last) - ((x-last)%2);
        }
            else
                pt+= (x - last) - (1 - ((x-last)%2));
            last = x;
            curr = y;
        }
    pt+= (m - last);
    cout << pt << "\n"; 
        
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
