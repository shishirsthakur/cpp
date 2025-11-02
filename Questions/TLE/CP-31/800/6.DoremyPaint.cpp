#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<long long, long long> freq;
    for(auto i : arr){
        freq[i]++;
    }
    if(freq.size() >=3){
        cout << "No" << "\n";
    }
    else{
        long long f1 = freq.begin()->second;
        long long f2 = freq.rbegin()->second;
        if(f1 == f2){
            cout << "Yes" << "\n";
        }
        else if(n%2 == 1 && abs(f1-f2) == 1){
            cout << "Yes" << "\n";
        }
        else cout << "No" << "\n";
    }



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
