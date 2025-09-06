#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
char arr[4] = {'+', '-', '*', '/'};
int a, b;
char sym;
cin >> a >> sym >> b;
if(sym ==arr[0] ){
	cout << a + b;
}
else if(sym ==arr[1] ){
	cout << a - b;
}
else if(sym ==arr[2] ){
	cout << a * b;
}
else cout << a / b;



}