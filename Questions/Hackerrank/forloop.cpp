// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	cin >> a >>b;
	string num[10] = {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
 for(int i = a; i<=b; i++){
 	if(i>9){
 		if(i%2==0){
 			cout << "even" << endl;
 		}
 		else cout << "odd" << endl;
 	}
 	else cout << num[i] << endl;

 }


}