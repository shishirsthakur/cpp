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
      int freq[101] = {0};

      for(int i= 0 ; i < n; i++){
         int x;
         cin >> x;
         freq[x]++;
      }
      
        int min = 0;
        
        for(int i = 0; i <= 100; i++){
            if(freq[i] == 0){
                
                min = i;
                break;
            }
        }
        
        cout << min << "\n";
    }
    
    return 0;
}
 