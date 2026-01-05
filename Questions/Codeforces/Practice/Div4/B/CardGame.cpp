#include <bits/stdc++.h>
using namespace std;
int res(int a, int b){
    if(a>b){
        return 1;
    }
    else if(a == b){
        return 0;
    }
    else return -1;
}

void solution() {
    long long a, b, c, d;
    cin >> a >> b >>c >> d;
    int count = 0;
    if (res(a, c) + res(b, d) > 0) count++;
    if (res(a, d) + res(b, c) > 0) count++;
    if (res(b, c) + res(a, d) > 0) count++;
    if (res(b, d) + res(a, c) > 0) count++;

    cout << count << "\n";

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
