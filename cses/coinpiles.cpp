#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long int t;
cin >> t;
while(t--){

long long int a, b, c;
cin >> a >> b;
c = a+b;
if (c==0){
	cout << "YES" << "\n";
}
else if (a == 0 || b == 0){
	cout << "NO" << "\n";
}
else if(c%3==0 && min(a, b) * 2 >= max(a, b)){
	cout << "YES" << "\n";
}

else cout << "NO" << "\n";

}
}