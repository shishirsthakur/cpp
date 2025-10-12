#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int t;
     cin >> t;
     if (t<2){
        cout << "NO";
        return 0;
     }
     else if(t==2){
        cout << "YES";
        return 0;
     } 
     bool j = false;
     for(int i = 2; i < t; i++){
        if(t % i == 0){
            j = true;
        }

     }
     if(j){
        cout << "NO";
     }
     else cout << "YES";


 }