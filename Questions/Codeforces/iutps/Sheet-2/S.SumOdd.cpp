#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
int t;
cin >> t;
while(t--){
  int a, b;
  cin >> a >> b;
  int sum = 0;
  int maximum = max(a, b);
  int minimum = min(a, b);
  

 
     for(int i = minimum+1; i < maximum; i++){
      if(i%2!=0){
      sum+=i;
  }
      
  }
  cout << sum << endl;
  }

}