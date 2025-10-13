#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
if(n <= 0){
        return 0;
    }
    
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
   
    long long fib1 = 0, fib2 = 1;
    
   
    cout << fib1;
    
    if(n >= 2){
        cout << " " << fib2;
    }
    
    for(int i = 2; i < n; i++){
        long long nextTerm = fib1 + fib2;
        cout << " " << nextTerm;
        fib1 = fib2;
        fib2 = nextTerm;
    }
    
    cout << endl;
}