// https://usaco.org/index.php?page=viewproblem2&cpid=591

#include<bits/stdc++.h>
using namespace std;

int main(){

	   ifstream fin("promote.in");
    ofstream fout("promote.out");

ios::sync_with_stdio(0);
fin.tie(0);
	
	long long ib, fb, is, fs, ig, fg, ip, fp;

fin >> ib >> fb >> is >> fs >> ig >> fg >> ip >> fp;

long long diffbronze, diffsilver, diffgold, diffplat;
diffgold = fg-ig;
diffplat = fp-ip ;
diffbronze = fb-ib;
diffsilver = fs-is;


long long gtp = diffplat;
long long stg = diffgold + gtp;
long long bts = stg+ diffsilver;



fout << bts << endl;
fout << stg << endl;
fout << gtp << endl;

}