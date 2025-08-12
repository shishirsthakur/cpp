// https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long int initialcost = 0;
long long int money = 0;
long long int banana = 0;
cin >> initialcost >> money >> banana;
long long int totalcost = 0;

	for(int i = 0; i <= banana; i++){
		totalcost = totalcost + initialcost*i; 
	}
	if(totalcost<money){
		cout << 0;
	}
	else{
	totalcost = totalcost - money;
	cout << abs(totalcost);
}


}