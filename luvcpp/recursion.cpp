#include<bits/stdc++.h>
using namespace std;
//print factorial on N

int fact(int n){
	if(n==0) return 1;
	return fact(n-1)*n;
}

int main(){
	int n;
	cin >> n;
	cout << fact(n);
	
	
}
// No of function calls
// Compleexity of fxn is required for Time complexity calculation