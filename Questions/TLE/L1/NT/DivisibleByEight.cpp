#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    int n = s.length();
    
    for(int i = 0; i < n; i++){
        int a = (s[i] - '0');
        if(a % 8 == 0){
            cout << "Yes" << "\n";
            cout << a << "\n";
            return;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int b = (s[i] - '0') * 10 + (s[j] - '0');
            if(b % 8 == 0 && s[i] != '0'){
                cout << "Yes" << "\n";
                cout << b << "\n";
                return;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int c = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if(c % 8 == 0 && s[i] != '0'){
                    cout << "Yes" << "\n";
                    cout << c << "\n";
                    return;
                }
            }
        }
    }
    
    cout << "No" << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
}
