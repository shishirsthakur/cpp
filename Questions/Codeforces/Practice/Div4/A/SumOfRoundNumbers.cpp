#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    int count = 0;
     vector<int> res;
    int m = 1;
    while(n > 0){
        int req = n % 10;
        if(req != 0){
            res.push_back(req * m);
            count++;
        }
        n = n / 10;
        m = m * 10;
    }
    cout << count << "\n";
    for(int i = 0; i < count; i++){
        cout << res[i] << " ";
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
