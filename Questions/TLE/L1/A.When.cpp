#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int a = 21;
int b = 00;
if(n<60){
b = b + n;
}
if(n>=60){
a = a + (n/60);
b= b + (n-60);
}
stringstream ss;
    ss << setw(2) << setfill('0') << a << ":" << setw(2) << setfill('0') << b;
    cout << ss.str();
}