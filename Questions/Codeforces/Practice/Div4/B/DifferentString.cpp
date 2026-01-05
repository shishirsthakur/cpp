#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    int size = s.size();
    bool f = false;
    for(int i = 0; i < size-1; i++){
        if(s[i] != s[i+1]){
            f = true;
            break;
        }
    }
    string r = s;


    if(f){
        for(int i = 0; i < r.size()- 1; i++ ){
            swap(r[i], r[i+1]);
        }
        cout << "YES" << "\n" << r << "\n";
    }
    else cout << "NO" << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}
