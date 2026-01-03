#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    string check;
    cin >> check;
    if(n!= 5){
        cout << "NO" << "\n";
    }
    else{
    string target = "Timur";
    sort(check.begin(), check.end());
    sort(target.begin(), target.end());
    if(check == target){
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
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
