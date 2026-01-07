#include <bits/stdc++.h>
using namespace std;

void factorise(long long n, vector<long long> &k){
    for(long long i = 2; i * i <= n; i++){
        if(n % i == 0){
            k.push_back(i);
            if(i != n/i && n/i != n){
                k.push_back(n/i);
            }
        }
    }
}

void solution() {
    long long int n;
    cin >> n;
    vector <long long> arr(n);
     vector <long long> arr2;
    long long small;
    long long biggest;
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    small = arr[0];
    biggest = arr[n-1];
    long long req = small*biggest;
    factorise(req, arr2);
    sort(arr2.begin(), arr2.end());
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
