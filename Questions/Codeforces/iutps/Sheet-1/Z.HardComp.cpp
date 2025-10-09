#include<bits/stdc++.h>
using namespace std;
#define Max 1e7+10
int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long int a,b, c, d;
cin >> a >> b >> c >> d;
double f, g;

if(a==1){
f = 0;
}
else f = b * log(a);

if(c==1){
g = 0;
}
else g = d * log(c);

if( f > g){
  cout << "YES";
}
else cout << "NO";
}