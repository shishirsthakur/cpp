#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
int t;
cin >> t;
while(t--){
  string s;
  cin >> s;
  int size = int(s.size());

  for(int i = size-1; i >= 0; i--){
    cout << s[i] << " ";
  }
  cout << endl;
}
}