    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
       long long a , b;
       cin >> a >> b;
       if(a<b){
        cout << a <<" " << b << "\n";
       }
       else cout << b <<" " << a << "\n";
    }
     
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;
        while (t--) {
            solution();
        }
    }