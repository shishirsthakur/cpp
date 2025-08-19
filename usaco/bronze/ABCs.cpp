// https://usaco.org/index.php?page=viewproblem2&cpid=1059


#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

long long int a;
long long int b;
long long int c;
long long int sumab = a + b;
long long int sumbc = b + c;
long long int sumabc = a + b + c;

int arr[7];
for(int i = 0 ;i < 7; i++){
	cin >> arr[i];
}
sort(arr, arr+7);


sumabc = arr[6];
a = arr[0];
b = arr[1];
c = arr[6]-(arr[0]+arr[1]);
cout << a << " " << b << " " << c;

}
