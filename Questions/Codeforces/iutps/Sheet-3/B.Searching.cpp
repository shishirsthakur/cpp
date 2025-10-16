#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool found = false;
    long long t;
    long long int index;
    cin >> t;

    for(int i = 0; i < n; i++){
        if(arr[i] == t){
           found = true;
           index = i;
           break;
    }
    
}
if(found){
        cout << index;
    }
    else cout << "-1";
}