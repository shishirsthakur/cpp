#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		long long product=1;
		for(int i=0;i<n;++i){
			int x;
			cin >> x;
			product = product*x;

		}
		int digit= product%10;
		if(digit==2||digit==3){
			cout <<"Yes\n";	
		}else cout << "No\n";
	}
	return 0;
}