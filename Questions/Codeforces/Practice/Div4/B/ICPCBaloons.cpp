#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int count = 2;
    sort(s1.begin(),s1.end());

    for(int i = 0; i < n-1; i++){
        if(s1[i] == s1[i+1]){
            count++;
        }
        else count+=2;
    }
    cout << count << "\n";

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
