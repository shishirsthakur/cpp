#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

void solution() {
    long long n;
    cin >> n;
    
    long long a = 1, b = n;
    
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            long long d1 = i;
            long long d2 = n / i;
            
            if(lcm(d1, d2) == n && max(d1, d2) < max(a, b)){
                a = d1;
                b = d2;
            }
        }
    }
    
    cout << a << " " << b << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
}
