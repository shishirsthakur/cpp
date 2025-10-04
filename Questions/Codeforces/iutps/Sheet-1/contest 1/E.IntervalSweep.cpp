#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int a, b;
cin >>a >> b;
if (a - b == 1 || b - a == 1 || (a == b && a != 0 || (a == b && b != 0))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}