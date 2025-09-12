#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);
float a, b;
cin >> a >> b;
if(a> 0 && b > 0){
    cout << "Q1";
}
else if(a< 0 && b > 0){
    cout << "Q2";
}
else if(a< 0 && b < 0){
    cout << "Q3";
}
else if(a> 0 && b < 0){
    cout << "Q4";
}

else if(a == 0 && b !=0){
    cout << "Eixo Y";
}
else if(b == 0 && a !=0){
    cout << "Eixo X";
}
else if(b == 0 && a == 0){
    cout << "Origem";
}


}