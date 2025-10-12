#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
      int n;
      cin >>n;
      cin.ignore();
      int arr[n];
      for(int i = 0; i < n; i++){
        cin >> arr[i];
      }
      int evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) evenCount++;
        if(arr[i] % 2 != 0) oddCount++;
        if(arr[i] > 0) posCount++;
        if(arr[i] < 0) negCount++;
    }
    int even[evenCount];
      int odd[oddCount];
      int positive[posCount];
      int negative[negCount];

int j=0, k=0, l=0, m=0;
      for(int i = 0; i < n; i++){
        if(arr[i] %2 == 0){
            even[j++] = arr[i];
        }
        if(arr[i] %2 != 0){
            odd[k++] = arr[i];
        }
        if(arr[i] > 0){
            positive [l++] = arr[i];
        }
        if(arr[i] < 0){
            negative[m++] = arr[i];
        }
      }
      cout << "Even: " << evenCount << endl;
      cout << "Odd: " << oddCount << endl;
      cout << "Positive: " << posCount << endl;
      cout << "Negative: " << negCount << endl;
}