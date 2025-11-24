#include <bits/stdc++.h>
using namespace std;

bool check(long long x){
    long long digits = 0;
    long long zeros = 0;
    while(x){
        if(x % 10 == 0)
            zeros++;
        digits++;
        x /= 10;
    }
    return zeros == digits - 1;
}

vector<long long> v;

void solution(){
    long long n;
    cin >> n;
    
    long long ans = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] <= n)
            ans++;
        else
            break;
    }
    
    cout << ans << endl;
}

int main(){
    for(long long i = 1; i <= 999999; i++){
        if(check(i))
            v.push_back(i);
    }
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solution();
}
