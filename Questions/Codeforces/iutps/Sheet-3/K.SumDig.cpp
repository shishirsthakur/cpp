#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;
    string num;
    cin >> num;
    int sum = 0;
    for (char c : num) {
        sum += c - '0';  
    }

    cout << sum;
    return 0;
}
