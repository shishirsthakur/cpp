#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
     int t;
     cin >> t;
     long long int result = 1;
     while(t--){
        int n;
        cin >> n;

        for(int i = n; i>=1; i--){
            result *= i;

        }
        cout << result << endl;
        result = 1;
     }
}