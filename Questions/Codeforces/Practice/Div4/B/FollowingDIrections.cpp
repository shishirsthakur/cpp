#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<char> arr(n);
    string req = "00";
    string candy = "11";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool f = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == 'U'){
            req[1] = (int)req[1]+1; 
        }
        if (req == candy){
            f = true;
        } 
        else if(arr[i] == 'D'){
            req[1] = (int)req[1]-1; 
        }
        if (req == candy){
            f = true;
        } 
        else if(arr[i] == 'L'){
            req[0] = (int)req[0]-1; 
        }
        if (req == candy){
            f = true;
        } 
        else if(arr[i] == 'R'){
            req[0] = (int)req[0]+1; 
        }
        if (req == candy){
            f = true;
        } 
    }
    if(f){
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
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
