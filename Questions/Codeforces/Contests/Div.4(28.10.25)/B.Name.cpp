#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int q;
    cin >> q;
    
    while(q--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int f[26] = {0};
        for(int i = 0; i < s.size(); i++){
            f[s[i] - 'a']++;
        }
        for(int i = 0; i < t.size(); i++){
            f[t[i] - 'a']--;
        }

        bool can = true;
        for(int i = 0; i < 26; i++){
            if(f[i] != 0){
                can= false;
                break;
            }
        }
        
        cout << (can ? "YES\n" : "NO\n");
    }
    
}
