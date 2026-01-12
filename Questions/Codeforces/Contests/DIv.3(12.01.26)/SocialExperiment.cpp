#include <iostream>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    if (n == 2) {
        cout << 2 << "\n";
        return;
    }
    
    if (n == 3) {
        cout << 3 << "\n";
        return;
    }

    if (n % 2 == 0) {
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
