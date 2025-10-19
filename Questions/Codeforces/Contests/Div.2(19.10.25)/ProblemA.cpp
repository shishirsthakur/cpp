#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        string str;
        cin >> str;
        
        int prot = 0;
        int one = -k;
        
        for(int i = 0; i < n; i++){
            if(str[i] == '1'){
                if(i - one >= k){
                    prot++;
                }
                one = i;
            }
        }
        
        cout << prot << "\n";
    }
}
