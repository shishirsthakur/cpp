#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
long long fact = 1;
for(int i = 2; i<=n; ++i){
	fact = fact*i % M;
}
	
	
}

// 1. (a + b) % M = ((a%M) + (b%M)) % M;
// 2. (a * b) % M = ((a%M) * (b%M)) % M;
// 3. (a * b) % M = ((a%M) - (b%M)) % M;
// 4. (a/b % M)   = ((a%M) * (b^-1 % M
// print answer modulo M reduces overflow
// break down the value according to the formula
// 10^9 +7 is used because it is a prime
// and can be usedto find MI and final result
// can be stored in int.