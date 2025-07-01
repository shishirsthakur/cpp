#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int last_digit=s[s.size() - 1] - '0';
	cout << last_digit;
	return 0;
} //cannot input big numbers as integers