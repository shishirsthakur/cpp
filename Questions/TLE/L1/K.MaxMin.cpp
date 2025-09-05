#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long int a, b, c;
cin >> a >> b >> c;
if(a>=b && a>=c){
	if(b>=c){
	cout << c << " " << a;
}
else cout << b << " " << a;

}

else if(b>=a && b>=c){
	if(a>=c){
	cout << c << " " << b;
}
else cout << a << " " << b;

}
else if(c>=a && c>=b){
	if(a>=b){
	cout << b << " " << c;
}
else cout << a << " " << c;

} 


}