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
    int low = arr[0];
    int position = 1;
    for(int i = 1 ; i < n; i++){
        if(arr[i] < low){
            position = i+1;
            low = arr[i];
        }
    }
    cout << low << " " << position;

}
