#include <bits/stdc++.h>
using namespace std;

void solution(){
   long long n;
   cin >> n;
   string s;
   cin >> s;
   long long sol = n;
   long long l = 0, r = n - 1;
   while (l <= r)
    {
        if (s[l] != s[r]){
         sol -= 2;
     }
    else
    break;
    l++; 
    r--; 
}
cout << sol << endl;

    }


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
