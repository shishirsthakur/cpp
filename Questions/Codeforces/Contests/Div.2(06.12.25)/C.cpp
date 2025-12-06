#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s, t;
    cin >> s >> t;
    
    vector<int> freqs(26, 0);
    vector<int> freqt(26, 0);
    for (char c : s) freqs[c - 'a']++;
    for (char c : t) freqt[c - 'a']++;
    
    for (int i = 0; i < 26; i++) {
        if (freqt[i] < freqs[i]) {
            cout << "Impossible\n";
            return;
        }
    }
    
    string s2;
    for (int i = 0; i < 26; i++) {
        s2.append(freqt[i] - freqs[i], (char)('a' + i));
    }
    
    string r;
    int pt = 0;
    int m = s2.length();
    
    for (char c : s) {
        while (pt < m && s2[pt] < c) {
            r += s2[pt++];
        }
        r += c;
    }
    
    while (pt < m) {
        r += s2[pt++];
    }
    
    cout << r << "\n";
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
