#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, k;
    cin >> n >> k;
    vector<long long> factors;
    
    long long temp = n;
    for(long long i = 2; i * i <= temp; i++){
        while(temp % i == 0){
            factors.push_back(i);
            temp /= i;
        }
    }
    if(temp > 1){
        factors.push_back(temp);
    }
    
    if(factors.size() < k){
        cout << "-1" << "\n";
    }
    else {
        for(int i = 0; i < k - 1; i++){
            cout << factors[i] << " ";
        }
        
        long long last = 1;
        for(int i = k - 1; i < factors.size(); i++){
            last *= factors[i];
        }
        cout << last << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
}