#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    for(int i =0; i < n; i++){
        if(arr[i] <= 10){
            cout << "A[" << i << "] " << "= " << arr[i] << '\n';
        }
    }

}
