#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
     int n;
     cin >> n;
     long long int arr[n];
     for(int i= 0; i<n; i++){
        cin >> arr[i];
     }
     long long int maximum = arr[0];
     for(int i= 1; i<n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
     }
     cout << maximum;
}