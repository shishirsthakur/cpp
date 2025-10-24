#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){

    long long m, m1;
    cin >> m;
    int count = 0;
    if(m == 2 || m < 2){
        cout << "0";
    }
    else{
    while(m >= 3){
        m1 = m/3;
        count += m1;
        m -= 2 * m1;

    }
    cout << count << '\n';
}
}
}
