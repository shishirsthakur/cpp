#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    int length = s.length();
    for(int i = 0; i < length; i++){
        if(s[i] == 'p'){
            s[i] = 'q';
        }
       else if(s[i] == 'q'){
            s[i] = 'p';
        }
    }
     reverse(s.begin(), s.end());

    cout << s << "\n";
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
