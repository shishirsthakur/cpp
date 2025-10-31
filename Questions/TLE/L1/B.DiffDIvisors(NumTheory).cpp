#include <bits/stdc++.h>
using namespace std;

bool i_p(int j){
    for(int i = 2; i*i <= j; i++){
if(j%i==0)return false;
}
return true;
}
int n_p(int x){
    for(int j = x;; j++){
        if(i_p(j))
            return j;
    }

}


void solution(){
    int d;
    cin >> d;
    int p = n_p(d+1);
    int q = n_p(p+d);

    cout << min(1LL*p*p*p, 1LL*p*q) << '\n';
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin >> t;
   while(t--){
    solution();
   

    }
    }
