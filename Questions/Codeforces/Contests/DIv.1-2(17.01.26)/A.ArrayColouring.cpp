#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool poss = true;
    for (int i = 0; i < n - 1; ++i) {
        if ((arr[i] % 2) == (arr[i+1] % 2)) {
            poss = false;
            break;
        }
    }
    if(poss){
    cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
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
