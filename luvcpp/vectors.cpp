#include<bits/stdc++.h>
using namespace std;
// void printvect(vector<int> &v){
// 	cout << "size: " << v.size() << endl;
// 	for(int i = 0; i < v.size(); ++i){
// 		cout << v[i] << " ";
// 	}
// 	v.push_back(2);
// 	cout << endl;
// }

// int main(){
// 	vector <int> v;
// 	int n;
// 	cin >> n;
// 	for(int i = 0; i < n; ++i){
// 		int x;
// 		cin >> x;
// 	v.push_back(x);  //O(1)
// }
// printvect(v);

// }
// int main(){
// 	vector<int> v(5, 3); //all values = 3
// 	v.push_back(6); //adds one 6 to the end
// 	printvect(v);
// 	v.pop_back(); //removes last element
// 	printvect(v);
// 	vector<int> v2 = v; //copies vector
// }
// we cannot copy arrays directly
// only their pointers can be copied
// and then too the changes between them
// are linked.

// int main(){
// 	vector<int> v;
// 	v.push_back(7);
// 	v.push_back(6);
	
// 	vector<int> v2 = v; //O(n)
// 	v2.push_back(5);
// 	printvect(v);
// 	printvect(v);
// 	printvect(v2);
// }
// when parsing vectors to a function
// we should use references as it saves
// o(n) time complexity normally a copy
// is passed



// vectors are arrays with dynamic size


void printvect(vector<string> &v){
	cout << "size: " << v.size() << endl;
	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
	cout << endl;
}


int main(){
	vector<string> v;
	int n;
	cin >> n;
	for(int i = 0; i <n; ++i){
		string s;
		cin >> s;
		v.push_back(s);

	}
	printvect(v);

}