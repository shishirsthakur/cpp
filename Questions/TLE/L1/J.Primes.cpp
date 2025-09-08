#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;

for(int k = 2; k <= n; k++){
	bool p = true;
	for(int i = 2; i < k; i++){
	if(k%i==0){
		p = false;
	break;
	}
}
if (p){
	cout << k << " "; 
}
}
}