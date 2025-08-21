#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long n;
cin >> n;
long long arr[n];
for(int i =0; i < n; i++){
	cin >> arr[i];
}
long long product = 1;
for(int i = 0; i < n; i++){
	product = (product * arr[i]) % MOD;
}
cout << product;

}