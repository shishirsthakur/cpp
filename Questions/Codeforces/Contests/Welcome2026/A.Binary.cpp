#include <bits/stdc++.h>
using namespace std;


void solution() {
    long long int n;
    cin >> n;
    vector <long long> arr(n);
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool alice = true;
    if(arr[0] == 0 && arr[n-1] == 0){
            alice = false;
        }
    
    if(alice){
        cout << "Alice" << "\n";
    }
    else cout << "Bob" << "\n";
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
