#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
       int a, b;
       cin >> a >> b;
       int first_a, second_a;
       first_a = a/10;
      
       second_a = a%10;
       if(second_a == 0){
        cout << "YES";

       }
       else if(first_a % second_a == 0 || second_a % first_a == 0){
        cout << "YES";
       }
       else cout << "NO";

}