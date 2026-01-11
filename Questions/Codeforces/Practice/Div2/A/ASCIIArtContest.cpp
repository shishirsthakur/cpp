#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int g, c, l;
    cin >> g >> c >> l;
    
    vector<int> v = {g, c, l};
    sort(v.begin(), v.end());
    
    int mn = v[0];
    int md = v[1];
    int mx = v[2];
    
    if(mx - mn >= 10) {
        cout << "check again" << "\n";
    } else {
        cout << "final " << md << "\n";
    }
    
    return 0;
}
