#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
int k, s, c, z;
int count = 0;
cin >> k >> s;
for(int x = 0; x <= k; x++){
	for(int y = 0; y <= k; y++){
		z = s-(x+y);
	if(z>=0 && z<=k){
		count++;
	}
}
	
}
cout << count;

}