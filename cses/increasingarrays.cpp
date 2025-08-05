#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);


long long int s;
cin >> s;

int array[s];
for(long long int i = 0; i < s; i++){
	cin >> array[i];
}
// for(int i = 0; i < s; i++){
// 	cout << array[i] ;
// }
// cout << "\n";
// for(int i = 0; i < s; i++){
// 	array[i] += 1;
// }
// for(int i = 0; i < s; i++){
// 	cout << array[i];
// }
// cout << "\n";
long long int count = 0;
for(long long int i = 1; i < s; i++){

	while(array[i]<array[i-1]){
	if(array[i]<array[i-1]){
		array[i] += 1;
		count++;
	}
}

// 	for(int i = 0; i < s; i++){
// 	cout << array[i];
// }
// cout << "\n";
}
cout << count;
	}
	

