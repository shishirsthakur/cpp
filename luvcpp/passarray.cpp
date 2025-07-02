#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int a[N][N];
// void func(int a[][20]){
// 	a[0][0] =5;
// }

// //arrays are always passed by reference and in case 
// //of 2d arrays the second[] should have a value

// int main(){
// 	int a[10][20];
// 	a[0][0]=7;
//  cout << a[0][0]<< endl;
//  func(a);
//  cout << a[0][0]   <<endl;
	
// }
void func(){
	a[0][0] =5;
}

//arrays are always passed by reference and in case 
//of 2d arrays the second[] should have a value

int main(){
	a[0][0]=7;
 cout << a[0][0]<< endl;
 func();
 cout << a[0][0]   <<endl;
	 
}
// to solve the problem of passing arrays, declare
// a bigger array using the constraints provided
// in the question and then you can use it as 
// required.