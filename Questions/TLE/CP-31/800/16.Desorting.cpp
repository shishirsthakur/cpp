#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long n;
    cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long op = INT_MAX; 
        for (int i = 0; i < n - 1; i++){
if (arr[i] <= arr[i + 1]){
long long d = arr[i + 1] - arr[i]; 
long long req = d/ 2 + 1;
op = min(op, req); 

            }

            else  op = 0; 

        }
        cout << op << endl;
    }
    



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) 
    solution();
}
