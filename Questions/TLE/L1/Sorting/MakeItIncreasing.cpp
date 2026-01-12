#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i = n-2; i >= 0; i--){
            while(arr[i] >= arr[i+1]){
    if(arr[i] == 0){
        cout << "-1\n";
        return;
    }
    arr[i] = arr[i]/2;
    count++;
}
    }
     cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    if (cin >> t) {
        while (t--) {
            solution();
        }
    }
    return 0;
}
