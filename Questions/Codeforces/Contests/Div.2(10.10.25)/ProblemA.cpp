#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin >> t;
int tree=0, minb=0, maxb=0;

while(t--){
	cin >> tree;
	vector <int>  apple(tree);
	for(int i = 0; i < tree; ++i){
		cin >> apple[i];
	}

	sort(apple.begin(), apple.end());
        
        int count = 1;
        for(int i = 1; i < tree; ++i){
            if(apple[i] > apple[i-1]){
                count++;
            }
        }
        
        cout << count << endl;
    }

}