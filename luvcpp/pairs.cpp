#include<bits/stdc++.h>
using namespace std;
// 
int main(){
pair<int,string> p, q;
p = make_pair(2, "abc");
q = {2, "abcd"};
pair<int,string> p1 = p;  //normally a copy is passed but & can be used for pass by value
	p1.first = 3;
	cout << p1.first << " " << p1.second << endl;

	int a[] = {1,2,3};
	int b[]= {2,3,4};
	pair<int,int> p_array[3];
	p_array[0]= {1,2};
	p_array[1]= {2,3};
	p_array[2]= {3,4};
	for(int i = 0; i < 3; ++i){
		cout << p_array[i].first << " "<< p_array[i].second << endl;
	}	
}

// pairs can be used when two arrays are 
// related