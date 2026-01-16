#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    cin >> s;
    
    set<char> ch;
    for(char c : s) {
        ch.insert(c);
    }
    
    if(ch.size() % 2 == 1) {
        cout << "IGNORE HIM!\n";
    } else {
        cout << "CHAT WITH HER!\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
        solution();

}
