// https://codeforces.com/problemset/problem/610/A
#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long int n;
cin >> n;
long long a = 0;
if(n % 2 == 0){
	if(n % 4 == 0){
		a = (n/4) - 1;
		cout << a;

	}
	else cout << n/4;
}
else cout << a;


}