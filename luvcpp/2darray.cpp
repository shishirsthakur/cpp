#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >>m;
    int a[n][m];
    for (int i=0; i<n;++i){
    	for (int j=0; j<m; ++j){
    		cin >> a[i][j];
    	}
    }
  for (int i=0; i<n;++i){
    	for (int j=0; j<m; ++j){
    		cout << a[i][j] << " ";
    	}
    	cout<< endl;
    }
     
	return 0;
}
//max size of array in main(locally) is 10^5 and globally is 10^7