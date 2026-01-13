#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n, s, m;
    cin >> n >> s >> m;
    
    vector<pair<int, int>> task(n);
    for(int i = 0; i < n; i++) {
        cin >> task[i].first >> task[i].second;
    }
    
    sort(task.begin(), task.end());
    
    if(task[0].first >= s) {
        cout << "YES\n";
        return;
    }
    
    for(int i = 1; i < n; i++) {
        int gap = task[i].first - task[i-1].second;
        if(gap >= s) {
            cout << "YES\n";
            return;
        }
    }
    
    if(m - task[n-1].second >= s) {
        cout << "YES\n";
        return;
    }
    
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solution();
    }
}
