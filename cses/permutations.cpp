#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
if(n <= 3 && n!= 1){
	cout << "NO SOLUTION";
	return 0;
}

 vector<int> arr;

 for (int i = 2; i <= n; i += 2){

    	arr.push_back(i);
    }

for (int i = 1; i <= n; i += 2) {
	arr.push_back(i);
}
    

     bool possible = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1]== 1) {
            possible = false;
            break;
        }
    }
    if (possible) {
        for(int i = 0; i < n; i++){
        	cout << arr[i] << " ";
        }
       
    } else {
        cout << "NO SOLUTION\n";
    }
    return 0;
}
