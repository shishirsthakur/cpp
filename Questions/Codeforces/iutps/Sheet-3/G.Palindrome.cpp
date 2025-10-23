#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool f = true;
    for(int i = 0; i < n / 2; i++){
        if(arr[i] != arr[n - i - 1]){
            f = false;
            break;
        }
    }

    if(f) cout << "YES";
    else cout << "NO";

    return 0;
}
