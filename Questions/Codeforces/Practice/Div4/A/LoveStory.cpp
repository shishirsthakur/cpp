#include <bits/stdc++.h>
using namespace std;

void solution() {
    string a= "codeforces";
    string b;
    cin >> b;
    int count = 0;
    for(int i = 0 ; i < a.size(); i++){
        if(a[i] != b[i]){
            count++;
        }
    }
    cout << count << "\n";
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
