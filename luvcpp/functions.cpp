#include<bits/stdc++.h>
using namespace std;
// sum(int a, int b){ //parameters
// int result = a+b;
// return result;

// }

// int main(){
// 	cout <<sum(3,4)
    
//     	return 0;
// }
int digit_sum(int n){
	int digit_sum=0;
	while(n){
		digit_sum= digit_sum+ n % 10;
		n=n/10;
	}
	return digit_sum;
}

int main()
{
int a, b;
cin >>a>>b;
cout << digit_sum(a) + digit_sum(b);
	 
	return 0;
}