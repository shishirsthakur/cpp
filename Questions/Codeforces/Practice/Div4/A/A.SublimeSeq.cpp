#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int q;
    cin >> q;
    
    while(q--){
        int x;
        cin >> x;
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << '0' << '\n';
        }
        else{
        int req = n*x - (n-1)*x;
        cout << req << '\n';
}
    }

}

