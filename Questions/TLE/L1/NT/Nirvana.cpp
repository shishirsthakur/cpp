#include <bits/stdc++.h>
using namespace std;
 
void solution() {
    long long n;
    cin >> n;
    string s = to_string(n);
    long long p = 1;
    
    for(int i = 0; i < s.length(); i++){
        p *= (s[i] - '0'); 
    }
    
    long long ans = p;
    
    for(int k = 0; k < s.length(); k++){
        if(s[k] > '0'){
            string t = s;
            t[k] = t[k] - 1;
            
            for(int i = k + 1; i < t.length(); i++){
                t[i] = '9';
            }
            
            long long num = stoll(t);
            long long prod = 1;
            while(num > 0){
                prod *= (num % 10);
                num /= 10;
            }
            
            ans = max(ans, prod);
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solution();
}