#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, k, a;

    cin >> n >> k >> a;

    long long result = n*k ;

   long long c = result%a;


   double d = result/a;

    long long check = int(d);

     if(c != 0){

cout << "double";

}
else if(d >= -2147483648 && d <= 2147483647){

            cout << "int";

        }

        else cout << "long long";

    
}