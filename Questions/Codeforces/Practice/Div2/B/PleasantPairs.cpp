#include <bits/stdc++.h>
using namespace std;
 
void solution() {
    int n;
    cin >> n;
    
    vector<pair<long long, long long>> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    
    sort(arr.begin(), arr.end());
    
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].first * arr[j].first >= 2 * n) break;
            
            if (arr[i].first * arr[j].first == arr[i].second + arr[j].second) {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }