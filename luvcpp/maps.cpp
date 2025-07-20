#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
	cout << m.size() << endl;
	for(auto &pr : m){
		cout << pr.first << " " << pr.second << endl;

	}
}

int main(){
	map<string, string> m;
	// m[1] = "abc";
	// m[5] = "cdc";
	// m[3] = "acd";
	// m.insert({4, "afg"});
	// m[6] = 'a';
	// m[5] = "cde";
	m["abcd"] ="abcd"; // in case of strings the time complexity is s.size()*O(log n)
auto it = m.find(7);  //used to find a value in map (logn complexity)
	if(it != m.end()){
	m.erase(it); //O(logn)
}
// m.clear(); //clears the map
//this is done to prevent segmentation fault in case of
// non existent values

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

// adding and accessing values are both log n complexity
