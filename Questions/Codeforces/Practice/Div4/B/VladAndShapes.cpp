#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<string> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    vector <int> count;
    for(int i = 0; i < n; i++){
        int ones = 0;
        for(int j = 0; j < n; j++){
         if(arr[i][j] == '1'){
            ones++;
         }
        }
        if(ones > 0){
        count.push_back(ones);
        }

    }
    bool f = true;
    for(int i = 0; i < count.size() - 1; i++){
        if(count[i] != count[i+1]){
            f = false;
    }

    }
    if(f){
            cout << "SQUARE" << "\n";
        }
        else cout << "TRIANGLE" << "\n";
   

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
