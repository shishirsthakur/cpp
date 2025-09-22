#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int a, b, s;
char c, d;
cin >> a >> c >> b >>d >> s;
if(c == '+'){
	if(a+b == s) cout << "Yes";
	else cout << a + b ;
}
else if(c == '-'){
	if(a-b == s) cout << "Yes";
	else cout << a-b ;
}
else if(c == '*'){
	if(a*b == s) cout << "Yes";
	else cout << a*b;
}
}