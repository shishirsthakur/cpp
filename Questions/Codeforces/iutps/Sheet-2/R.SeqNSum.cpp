#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

while(true){
  int a, b;
  cin >> a >> b;
  if(a<=0 || b<=0){
    return 0;
  }
  int maximum = max(a, b);
  int minimum = min(a, b);
  int sum = 0;


  for(int i = minimum; i <=maximum; i++){
    cout << i << " ";
    sum+=i;
  }
  cout << "sum =" <<sum << endl;
}
}