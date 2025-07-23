#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
	for(string value : s){
		cout << value << endl;
	}
	// for(auto it = s.begin(); it != s.end(); ++it){
		// cout <<(*it) << endl;
	// }

}

int main(){
	set<string> s;
	s.insert("abc"); //logn complexity
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc"); //will have no impact as sets do not store duplicate elements;

	auto it = s.find("abcd"); //if element does not exist then end iterator returns
    if(it != s.end()){
    	cout << (*it);
    	// s.erase(it)/s.erase("abc") can be used to erase elements
    }
print(s);

}

//sets also store data in a sorted order
