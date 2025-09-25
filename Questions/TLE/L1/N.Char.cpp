#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
char c;
cin >> c;
int character = int(c);

if(character >= 65 && character <=90){
	cout << char(character+32);
}
else if(character >= 97 && character <=122){
	cout << char(character-32);
}
}