//https://www.hackerrank.com/challenges/crush/problem


// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e7+10;
// long long ar[N];


// int main(){
// 	int n, m;
// 	cin >> n >>m;
// 	while(m--){
// 		int a, b, d;
// 		cin >> a >> b >> d;
// 		for(int i = a; i<=b; ++i){
// 			ar[i]+=d;
// 		}
// 	}
// 	long long mx = -1;
// 	for(int i = 1; i<=n; ++i){
// 		if(mx< ar[i]){
// 			mx = ar[i];
// 		}
// 	}
// 	cout << mx << endl;
// }

// this code is not optimized

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long ar[N];


int main(){
	int n, m;
	cin >> n >>m;
	while(m--){
		int a, b, d;
		cin >> a >> b >> d;
		ar[a]+=d;
		ar[b+1]-=d;
	}
	for(int i= 1; i<=n; ++i){
		ar[i] += ar[i-1];
	}
	long long mx = -1;
	for(int i = 1; i<=n; ++i){
		if(mx< ar[i]){
			mx = ar[i];
		}
	}
	cout << mx << endl;
}


//  for adding x between l to r
// we can do a[l]+x and a[r+1]-x