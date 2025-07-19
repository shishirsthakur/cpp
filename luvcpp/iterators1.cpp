#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {2,3,5,6,7};
	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
		cout << endl;
// 	cout << endl;
// 	vector<int> ::iterator it = v.begin(); //declaration of iterator
// 	cout << (*(it+1)) << endl;
// }
	// vector<int> ::iterator it = v.begin(); //declaration of iterator
	// for(it = v.begin(); it != v.end();++it){
	// 	cout <<(*it) << endl;
	// 	vector<pair<int,int> > v_p = {{1,2}, {2,3}, {3,4}};
	// 	vector<pair<int,int> > :: iterator it;
	// 	for(it = v_p.begin(); it != v_p.end(); ++it){
	// 		cout <<(*it).first << " " << (*it).second << endl;
	// 		//*it is a pair and therefore .first/sec needs to be used
	// 		//in order to output
	// 	}
	// }

		vector<pair<int,int> > v_p = {{1,2}, {2,3}, {3,4}};
		vector<pair<int,int> > :: iterator it;
		for(it = v_p.begin(); it != v_p.end(); ++it){
			cout <<(*it).first << " " << (it->second) << endl; //if iterator points to pair then (it->second) declaration can be used
			
			//*it is a pair and therefore .first/sec needs to be used
			//in order to output
		}
	
}
// .begin() points to the first element of the vector
// and .end() points to the next to last(empty) element
//iterators are also continuous in nature
//it++ moves to next iterator
//it+1 moves to next location
// this does not matter in the case of vectors
// will be useful in maps and sets