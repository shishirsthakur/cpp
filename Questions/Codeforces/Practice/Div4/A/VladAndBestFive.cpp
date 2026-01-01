
#include <bits/stdc++.h>
using namespace std;

void solution() {
   char arr[5];
   for(int i = 0; i < 5; i++){
    cin >> arr[i];
   }
   int freq[256] = {0}; 
   for(auto i: arr){
    freq[i]++;
   }
   int f = 0;
   char c;
   for(int i = 0; i < 256; i++){
       if(freq[i] > f){
           f = freq[i];
           c = (char)i;
       }
   }
   
   cout << c << "\n";

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
