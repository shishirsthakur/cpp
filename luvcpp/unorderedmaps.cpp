#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string> &m){
	cout << m.size() << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;

	}
}

int main(){
	// 1. inbuilt implementation: hash tables are used(normal maps use trees)
	// 2. Time complexity: O(1) for insertion and reading both, also m.find, erase too.
	// 3. vald keys datatype: unordered maps cannot use complex datatypes such as pairs
	unordered_map<int, string> m;
	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "acd";
	m[6] = 'a';
	m[5] = "cde"; 
// auto it = m.find(7);  
// 	if(it != m.end()){
// 	m.erase(it); //O(logn)
// }
// if(it==m.end()){
	// 	cout << "No value";
	// }
	// else{
	// 	cout<< (*it).first << " " << (*it).second;
	// }

     print(m);
	// map<int,string> :: iterator it;
	// for(it = m.begin(); it != m.end(); ++it){
	// 	cout << (*it).first << " " << (*it).second << endl;

	// }
	
}
