#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

long long int a, b , c;
cin >> a >> b >> c;
 if (a <= b && a <= c) {
        if (b <= c) cout << a << "\n" << b << "\n" << c << "\n";
        else cout << a << "\n" << c << "\n" << b << "\n";
    } else if (b <= a && b <= c) {
        if (a <= c) cout << b << "\n" << a << "\n" << c << "\n";
        else cout << b << "\n" << c << "\n" << a << "\n";
    } else {
        if (a <= b) cout << c << "\n" << a << "\n" << b << "\n";
        else cout << c << "\n" << b << "\n" << a << "\n";
    }
cout << endl;
cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}