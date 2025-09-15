// https://codeforces.com/contest/1102/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

long long int n;
long long int min = 0;
long long int a = 0;
long long int b = 0;
long long int max = 1;
cin >> n;
long long int sum;
sum = n*(n+1)/2;

if(sum%2==0){
	cout << 0;
}
else cout << 1;
}