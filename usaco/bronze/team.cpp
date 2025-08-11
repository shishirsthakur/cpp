// https://codeforces.com/problemset/problem/231/A


#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);


int t;
cin >> t;
int count = 0;
int arr[3];

while(t--){
for(int i = 0; i<3; i++){
	cin >> arr[i];
}
for(int i = 0; i<3; i++){
	if(arr[0] == 1 && arr[1] == 1 ) {
	count++;
	break;
} 

if(arr[0] == 1 && arr[2] == 1) {
	count++;
	break;
} 

if(arr[1] == 1 && arr[2] == 1){
	count++;
	break;
} 
}

}
cout << count;

}