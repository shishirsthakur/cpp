#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
cin.tie(0);

	string s;
	cin >> s;

	int maxrep[256]= {0};
	int count = 1;
	for (int i = 1; i < s.size(); i++){
		if(s[i]==s[i-1]){
			count++;
			// cout  << s[i] << count << "\n";
		}
		else{
			if (count > maxrep[s[i - 1]]){
				maxrep[s[i-1]] = count;
				// cout << s[i-1] << maxrep[s[i-1]] << "\n";
			}
			count = 1;

		}
	}
	if(count > maxrep[s.back()]){
			maxrep[s.back()] = count;
			// cout << s.back() << maxrep[s.back()] << "\n";
		}
	int maximum = 0;
	for(int i = 0; i < 256; i++){
		if(maxrep[i]>maximum){
			maximum = maxrep[i];
		}
	}
	cout << maximum;

}