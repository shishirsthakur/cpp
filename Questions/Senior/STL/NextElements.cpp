#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){ 
        cin >> a[i];
}
    
    vector<int> req(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if (!st.empty()) {
            req[i] = st.top() + 1;
        }
        st.push(i);
    }
    int q;
    cin >> q;
    while (q--) {
        int i;
        cin >> i;
        i--;
        cout << req[i] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
