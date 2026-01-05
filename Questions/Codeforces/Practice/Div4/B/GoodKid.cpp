#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    
sort(arr.begin(), arr.end());
arr[0] = arr[0]+1;

long long prod = 1;
for(int i = 0; i< n; i++){
        prod*= arr[i];
    }
    cout << prod << "\n";
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
