#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
	for(string value: s){
		cout << valueb << endl;
	}
}
int main(){
	unordered_set<string> s;
	s.insert("abc");
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc");
	auto it = s.find("abc");
	if(it != s.end()){
		s.erase(it);
	}
	print(s);


}
