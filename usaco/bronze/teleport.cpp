#include<bits/stdc++.h>
using namespace std;

int main(){

	   ifstream fin("teleport.in");
    ofstream fout("teleport.out");

ios::sync_with_stdio(0);
cin.tie(0);
	
	int initial, final, a, b;
	fin >> initial >> final >> a >> b;
 int totaldist = final - initial;
int distance = abs(final-initial);

int td2 = abs(initial - a) + abs(b - final);

int td3 = abs(initial - b) + abs(a - final);

int ans = min({distance, td2, td3});
    fout << ans << "\n";

}