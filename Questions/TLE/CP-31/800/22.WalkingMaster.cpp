#include <bits/stdc++.h>
using namespace std;

void solution(){
   int sx, sy, dx, dy;
   cin >> sx >> sy >> dx >> dy;
   if (dy < sy){
    cout << -1 << '\n';
    return;
        }
        int m = dy - sy;
        sx += m;
        if (sx < dx){
            cout << -1 <<'\n';
             return;
        }
        m += (sx - dx);
        cout << m << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
