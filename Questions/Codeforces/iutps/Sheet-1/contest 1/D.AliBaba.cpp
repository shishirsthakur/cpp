#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

long long a, b, c, d;
cin >> a >>b >> c >>d;

if(a+b-c == d){
	cout <<"YES";
}
else if(a-b+c == d){
	cout <<"YES";
}
else if(a+b*c == d){
	cout <<"YES";
}
else if(a*b+c == d){
	cout <<"YES";
}
else if(a-b*c == d){
	cout <<"YES";
}
else if(a*b-c == d){
	cout <<"YES";
}
else cout << "NO";

}