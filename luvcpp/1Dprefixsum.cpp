/* Given array a of integers N. Given Q queries and
in each query given L and R print sum of
array elements from index L to R(L and R included).

Constraints:-
1 <= N <=1 0^5;
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/


// #include<bits/stdc++.h>
// using namespace std;

// const int N= 1e5+10;
// int a[N];

// int main(){
// 	int n;
// 	cin >> n;
// 	for(int i=1; i<=n; ++i){
// 		cin >> a[i];
// 	}
// 	int q;
// 	cin >> q;
// 	while(q--){
// 		int l, r;
// 		cin >> l >> r;
// 		long long sum = 0;
// 		for(int i= l; i<= r; ++i){
// 			sum+=a[i];
// 		}
// 		cout << sum << endl;

// 	}
	
// }

// we use prefix su, (precalculating
// 	the sum of i digits and storing
// 	in the index to reduce TC)


#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+10;
int a[N];
int pf[N];

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
		pf[i] = pf[i-1]+a[i];
	}
	int q;
	cin >> q;
	while(q--){
		int l, r;
		cin >> l >> r;
		
		cout << pf[r]- pf[l-1] << endl;

	}
	
}
