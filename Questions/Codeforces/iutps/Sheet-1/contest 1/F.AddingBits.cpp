#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int arrA[32]={0}, arrB[32]={0};
long long c, d;
cin >> c >> d;
int i = 31;
    while (c > 0) {
        arrA[i] = c % 2;
        c = c / 2;
        i--;
    }
    int j = 31;
    while (d > 0) {
        arrB[j] = d % 2;
        d = d / 2;
        j--;
    }

int result[32];
    for(int i = 0; i < 32; i++){
        if(arrA[i] == 1 && arrB[i] == 1){
            result[i] = 0; 
        }
        else if(arrA[i] == 0 && arrB[i] == 0){
            result[i] = 0;
        }
        else{
            result[i] = 1;
        }
    }

long long dec = 0;
    long long base = 1; 
    
    for(int i = 31; i >= 0; i--){
        if(result[i] == 1){
            dec += base;
        }
        base *= 2;
    }
    
    cout << dec;

}
