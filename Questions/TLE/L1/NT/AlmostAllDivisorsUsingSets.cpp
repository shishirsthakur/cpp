#include <bits/stdc++.h>
using namespace std;

void factorise(long long n, set<long long> &k){
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            k.insert(i);
            if(n/i != n){
                k.insert(n/i);
            }
        }
    }
}

void solution() {
    long long int n;
    cin >> n;
    set<long long> arr;
    set<long long> arr2;
    
    for(long long i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        arr.insert(temp);
    }
    
    long long small = *arr.begin();
    long long biggest = *arr.rbegin();
    long long req = small * biggest;
    
    factorise(req, arr2);
    
    if(arr == arr2){
        cout << req << "\n";
    }
    else cout << "-1" << "\n";
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
