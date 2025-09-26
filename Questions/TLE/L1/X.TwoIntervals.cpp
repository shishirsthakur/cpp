#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long int a,b, c, d;
cin >> a >> b >> c >> d;

if(max(a,c) <= min(b,d)){
	cout << max(a,c) << " " << min (b,d);
}
else cout << "-1";

}