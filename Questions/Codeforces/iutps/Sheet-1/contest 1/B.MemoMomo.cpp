#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long a, b, c;
cin >> a >> b >>c;
if(a%c==0 && b%c ==0){
	cout << "Both";
}
if(a%c==0 && b%c !=0){
	cout << "Memo";
	cout << "Memo";
}
if(a%c!=0 && b%c ==0){
	cout << "Momo";
}
if(a%c!=0 && b%c !=0){
	cout << "No One";
}
}