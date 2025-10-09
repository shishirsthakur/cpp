#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

double num;
cin >> num;
int integer = int(num);
double decimal = num - integer;
if(decimal == 0){
	cout << "int " << integer;
}

else cout << "float " << integer << " " << decimal;

}