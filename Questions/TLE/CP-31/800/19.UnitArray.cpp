#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long n;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++){ 
            cin >> arr[i];
        }
        long long p = 0;
        long long neg = 0;
        for (long long i = 0; i < n; i++){
            if (arr[i] == 1){
                p++;
            }
            else if(arr[i] == -1){
                neg++;
        }
    }
   


        long long op = 0;
        while (p<neg || neg%2==1){
        op++;
        p++;
        neg--;
    }
    cout << op << "\n"; 

    }


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
