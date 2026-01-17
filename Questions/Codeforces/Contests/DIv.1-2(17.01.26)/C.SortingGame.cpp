#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    bool same = true;
    for(int i = 0; i < n-1; i++){
        if(s[i] > s[i+1]){
            same = false;
            break;
        }
    }
    if(same){
        cout << "Bob\n";
    }

    else {   
    int z = 0;
    for (char c : s) {
        if (c == '0') z++;
    }
        vector<int> a2;
    for (int i = 0; i < z; i++) {
        if (s[i] == '1') a2.push_back(i + 1);
    }
    for (int i = z; i < n; i++) {
        if (s[i] == '0') a2.push_back(i + 1);
    }
        cout << "Alice\n";
        cout << a2.size() << "\n";
        for (int i = 0; i < a2.size(); i++) {
        cout << a2[i] << " ";
    }
    cout << "\n";
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
