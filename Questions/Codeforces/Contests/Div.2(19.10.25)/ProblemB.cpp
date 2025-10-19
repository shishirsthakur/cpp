#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        int temp[n];
        for(int k = 0; k < n; k++){
            temp[k] = arr[k];
        }
        int pmax = 0;
        for(int k = 0; k < n; k++){
            pmax = max(pmax, temp[k]);
            if(k % 2 == 1){ 
                temp[k] = pmax;
            }
        }
        int c = 0;
        for(int j = 0; j < n; j += 2){
            int minn = INT_MAX;
            
            if(j > 0){
                minn = min(minn, temp[j-1]);
            }
            if(j < n - 1){
                minn = min(minn, temp[j+1]);
            }
            
            if(minn != INT_MAX && temp[j] >= minn){
                int dec = temp[j] - minn + 1;
                c += dec;
            }
        }
        
        cout << c << "\n";
    }
    
    return 0;
}
