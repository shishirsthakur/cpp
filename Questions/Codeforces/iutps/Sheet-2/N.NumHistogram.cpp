#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
  char s;
  cin >> s;
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for(int j = 0 ; j < n; j++){
    while(arr[j]--){
        cout << s;
    }
    cout << endl;
  }
}
