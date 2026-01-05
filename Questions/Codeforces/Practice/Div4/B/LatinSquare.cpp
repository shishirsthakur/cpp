#include <bits/stdc++.h>
using namespace std;

void solution() {
    vector <string> latin(3);
    for(int i = 0 ; i < 3; i++){
        cin >> latin[i];
    }
    int counta = 0;
    int countb = 0;
    int countc = 0;
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            if(latin[i][j] == 'A'){
                counta++;
            }
            if(latin[i][j] == 'B'){
                countb++;
            }
            if(latin[i][j] == 'C'){
                countc++;
            }
        }
    }
    if(counta!=3){
        cout <<  "A" << "\n";
    }
    else if(countb != 3){
        cout <<  "B" << "\n";
    }
    else if(countc != 3){
        cout <<  "C" << "\n";
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
}
