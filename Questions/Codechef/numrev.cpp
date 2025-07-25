// https://www.codechef.com/LRNDSA01/problems/FLOW007

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	string num;
	cin >> num;
	string revnum = "";
	for(int i = (int)num.length()-1; i >= 0; i--){
		revnum+= num[i];
	}
	cout << revnum << endl;

}
return 0;
}