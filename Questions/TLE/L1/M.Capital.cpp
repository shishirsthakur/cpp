#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
char c;
cin >> c;
int character = int(c);
if(character >= 48 && character <=57){
	cout << "IS DIGIT";
}
else if(character >= 65 && character <=90){
	cout << "ALPHA\n";
	cout << "IS CAPITAL";
}
else if(character >= 97 && character <=122){
	cout << "ALPHA\n";
	cout << "IS SMALL";
}
}