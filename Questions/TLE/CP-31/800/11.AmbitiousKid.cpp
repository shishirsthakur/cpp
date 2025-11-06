#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n; 
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
     cin >> arr[i];
}
        
        for(int i = 0; i < n; i++){
         arr[i] = abs(arr[i]);
     }

    int minimum = *min_element(arr.begin(), arr.end());
cout << minimum << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int T; 
    // cin >> T;
    // while(T--) 
    solution();
    return 0;
}
