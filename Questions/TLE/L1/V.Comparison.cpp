#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int a, b;
char c;
cin >> a >> c >> b;
if(c == '='){
	if(a==b) cout << "Right";
	else cout << "Wrong";
}
else if(c == '>'){
	if(a>b) cout << "Right";
	else cout << "Wrong";
}
else if(c == '<'){
	if(a<b) cout << "Right";
	else cout << "Wrong";
}
}