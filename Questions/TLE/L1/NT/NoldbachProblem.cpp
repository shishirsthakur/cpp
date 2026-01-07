#include <bits/stdc++.h>
using namespace std;

vector<int> prime;
vector<bool> primes;

void sieve(int n){
    primes.assign(n+1, true);
    primes[0] = primes[1] = false;
    
    for(int i = 2; i*i <= n; i++){
        if(primes[i]){
            for(int j = i*i; j <= n; j+=i){
                primes[j] = false;
            }
        }
    }
    
    for(int i = 2; i <= n; i++){
        if(primes[i]){
            prime.push_back(i);
        }
    }
}

void solution() {
    int n, k;
    cin >> n >> k;
    
    sieve(n);
    
    int ct = 0;
    for(int i = 0; i < prime.size() - 1; i++){
        int sum = prime[i] + prime[i+1] + 1;
        if(sum <= n && primes[sum]){
            ct++;
        }
    }
    
    if(ct >= k){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solution();
}
