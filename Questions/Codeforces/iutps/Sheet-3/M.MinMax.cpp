#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
     int maxval = *max_element(arr, arr + n);
     int minval = *min_element(arr, arr + n);
   
    for(int i = 0; i < n; i++){
        if(arr[i] == maxval){
            arr[i] = minval;
        }
        else if (arr[i] == minval)
            arr[i] = maxval;
    }
 
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


}
