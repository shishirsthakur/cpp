#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);


long long int n;
cin >> n;
long long arr[n];
long long int count = 1;
long long int maxcount = 1;
long long result = 0;

for(int i = 0; i < n; i++){
	cin >> arr[i];
}
sort(arr, arr + n);

// for(int i = 0; i < n; i++){
// 	cout << arr[i] << " ";
// }
// cout << endl;

for(int i = 1; i<n; i++){
	if(arr[i]==arr[i-1]){
		count++;
	}
	else{ 
		if(count>maxcount)maxcount = count;
		count = 1;
	}

}
   if(count > maxcount) maxcount = count;
count = 1;

for(int i = 1; i < n; i++){
	if(arr[i]== arr[i-1]){
		count++;

	}

	else{ if(count== maxcount) result++;
		count = 1;
}

}
if(count == maxcount) result++;
cout << result;
}