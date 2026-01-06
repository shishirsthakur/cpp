#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 1;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n-1; i++){
        if(arr[i] != arr[i+1]){
            count++; 
        }

    }
    int mult = n - count;
    if (mult%2 == 0){
        cout << count << "\n";
    }
    else{
     cout << count - 1 << "\n";
}
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
