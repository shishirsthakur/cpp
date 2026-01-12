#include <bits/stdc++.h>
using namespace std;

void solution() {
 long long s, k, m;
 cin >> s >> k >> m;
 long long ss;
 long long flip;
 long long time;
 long long req;
 flip = m/k;
 time = m%k;
 if(flip%2 == 0){
    ss = s;
 }
 else{
    ss = min(s,k);
 }
 if(time == 0){
    cout << ss << "\n";
 }
 else cout << max(0LL, ss - time) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
}
