#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
long long int a,b, c, d;
cin >> a >> b >> c >> d;
long long f;

a = a%100;
b = b%100;
c = c%100;
d = d%100;


f = (a%100) * (b%100) % 100;
f = (f*(c % 100)) % 100;
f = (f*(d % 100)) % 100;
  if (f < 10) {
        cout << "0" << f;
    } else {
        cout << f;
    }
}