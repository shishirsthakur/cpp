#include<bits/stdc++.h>
using namespace std;


int main(){
ios::sync_with_stdio(0);
cin.tie(0);


long long int s;
cin >> s;

 long long zeroes = 0;
    for (long long p = 5; s / p > 0; p *= 5) {
        zeroes += s / p;
    }
    cout << zeroes;
    return 0;
	
}





	
