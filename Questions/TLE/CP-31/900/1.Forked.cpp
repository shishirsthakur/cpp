#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

void solution(){
    long long a, b;
    cin >> a >> b;
    long long x1, y1;
    cin >> x1 >> y1;
    long long x2, y2;
    cin >> x2 >> y2;
    
    set<pair<int, int>> s1, s2;
    
    for(int j = 0; j < 4; j++){
        s1.insert({x1 + dx[j] * a, y1 + dy[j] * b});
        s1.insert({x1 + dx[j] * b, y1 + dy[j] * a});
        
        s2.insert({x2 + dx[j] * a, y2 + dy[j] * b});
        s2.insert({x2 + dx[j] * b, y2 + dy[j] * a});
    }
    
    int ans = 0;
    for(auto pos : s1)
        if(s2.find(pos) != s2.end())
            ans++;
    
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solution();
}
