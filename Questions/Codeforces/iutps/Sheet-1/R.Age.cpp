#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int n, a, b;
cin >> n;

a = n/365;
int monrem = n%365;
b = monrem/30;
int dayrem = monrem%30;
cout << a << " years\n" << b << " months\n" << dayrem << " days\n";
}