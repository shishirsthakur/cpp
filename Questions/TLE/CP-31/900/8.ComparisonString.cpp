#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long largest = 1;
    long long curr = 1;
    for (int i = 1; i < n; i++){
        if (s[i] == s[i - 1]){
            curr++;
        }
        else{
            largest = max(largest, curr);
            curr = 1;
        }
    }
    largest = max(largest, curr);
    cout << largest + 1 << "\n";
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
