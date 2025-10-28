#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int q;
    cin >> q;
    
    while(q--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int odd= 0, even= 0;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 1) odd++;
            else even++;
        }
        if(odd > 0 && even > 0){
            sort(arr, arr + n);
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
