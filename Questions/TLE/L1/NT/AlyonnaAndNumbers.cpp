#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, m;
    cin >> n >> m;
    
    long long r0n = 0, r1n = 0, r2n = 0, r3n = 0, r4n = 0;
    long long r0m = 0, r1m = 0, r2m = 0, r3m = 0, r4m = 0;
    
    for(long long i = 1; i <= n; i++){
        if(i % 5 == 0) r0n++;
        else if(i % 5 == 1) r1n++;
        else if(i % 5 == 2) r2n++;
        else if(i % 5 == 3) r3n++;
        else if(i % 5 == 4) r4n++;
    }
    
    for(long long j = 1; j <= m; j++){
        if(j % 5 == 0) r0m++;
        else if(j % 5 == 1) r1m++;
        else if(j % 5 == 2) r2m++;
        else if(j % 5 == 3) r3m++;
        else if(j % 5 == 4) r4m++;
    }
    
    long long count = 0;
    count += r0n * r0m;
    count += r1n * r4m;
    count += r2n * r3m;
    count += r3n * r2m;
    count += r4n * r1m;
    
    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
}
