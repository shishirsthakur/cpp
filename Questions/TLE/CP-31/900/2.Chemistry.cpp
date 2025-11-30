#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, k;
    cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        long long odd = 0;
        for (int i = 0; i < n; i++){
            freq[s[i] - 'a']++;
            } 
        
        for (int i = 0; i < 26; i++){
            odd += freq[i] % 2;
        }
        if (odd > k + 1){

            cout << "NO" << "\n";
    }
        else{

         cout << "YES" << "\n";
}
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
