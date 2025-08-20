#include<bits/stdc++.h>
using namespace std;

int main(){
 ifstream fin("word.in");
    ofstream fout("word.out");
ios::sync_with_stdio(0);
cin.tie(0);
int n, k;
fin >> n >> k;
fin.ignore();
string word;
int currentlength = 0;
string line = "";

for(int i = 0; i < n; i++){
fin >> word;

if(currentlength==0){
	line = word;
	currentlength = word.size();
}
else{
	if( currentlength + word.size() > k){
	fout << line << '\n';
	line = word;
	currentlength = word.size();
}
else {
	line += " " + word;
	currentlength += word.size();
}
}


}
if (!line.empty()) fout << line << '\n';
}