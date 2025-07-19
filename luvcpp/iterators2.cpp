#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {2,3,5,6,7};
	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
		cout << endl;
		vector<int> :: iterator it;
		for(it = v.begin(); it != v.end(); ++it){
			cout <<(*it) << " ";
		}
		for(int value:v){
	cout << value << " ";
}
	cout << endl;
	vector<pair<int,int> > v_p = {{1,2}, {2,3}};
	for(pair<int,int> &value : v_p){  //can use auto &value
		cout << value.first << " " << value.second << endl;
	}
	auto a = 1;
	cout << a << endl;
}
//auto dynamically determines the data type
// lines 9,10 can be replaced by:-
// 		for(auto it = v.begin(); it != v.end(); ++it){

//for range based loops we can use
// for(int value:v){
// 	cout << value << " ";
// }
// a copy of data is passed
// if you want to pass by ref then use &value
