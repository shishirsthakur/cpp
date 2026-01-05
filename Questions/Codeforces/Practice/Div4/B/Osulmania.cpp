#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++){
     cin >> arr[i];
    }
    vector <int> a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == '#'){
                a.push_back(j+1);
            }
        }
    }
    reverse(a.begin(), a.end());
    for (int x : a){
     cout << x << " ";
    }
    cout << "\n";

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
