#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s2 = s;
    int count = 0;
     int req = 0;
    sort(s2.begin(),s2.end());
    if(s == s2){
        cout << 0 <<"\n";
    }
    else{  
         for(int i = 0; i < n; i++){
            if(s[i] != s2[i]){
                count++;
            }
    }
    cout << count/2 << "\n";
}
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
