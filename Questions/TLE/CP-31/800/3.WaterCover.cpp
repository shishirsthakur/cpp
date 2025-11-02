#include <bits/stdc++.h>
using namespace std;

int solution(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
  for(int i = 1; i < n-1; i++){
    if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
        cout << '2' << '\n';
        return 0;
    }
  }  
  for(int i = 0; i < n; i++){
    if(s[i] == '.'){
        count++;    
    }
  }
  cout << count << '\n'; 
  return 0;
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
