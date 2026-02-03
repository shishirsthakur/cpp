#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<tuple<int, string, int, int, int, int>> a;
    a.reserve(n);

    for (int i = 0; i < n; i++) {
        string name;
        int ab, b, c, d;
        cin >> name >> ab >> b >> c >> d;
        int sum = ab + b + c + d;
        a.push_back(make_tuple(-sum, name, ab, b, c, d));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int neg, ab, b, c, d;
        string name;
        tie(neg, name, ab, b, c, d) = a[i];

        cout << name << " " << -neg << " " << ab << " " <<b << " " <<c << " " << d << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
