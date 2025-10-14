#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());

    int i = 0;
    while(i<rev.length() && rev[i]=='0'){
        i++;
    }
     if(i == rev.length()){
        rev = "0";
    } else {
        rev = rev.substr(i);
    }
    cout << rev << '\n';
    string checkp = s;
    reverse(checkp.begin(), checkp.end());
    


    if(s == checkp){
        cout << "YES";
    } else {
        cout << "NO";
    }


    }
