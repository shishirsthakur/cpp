    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        long long a, b;
        cin >> a >> b;
        
        long long odd = 0;
        long long even = 0;
        int h = 0;
        
        while (true) {
            long long req = 1LL << h;
            long long tempo = odd;
            long long tempe = even;
            
            if ((h + 1) % 2 != 0) {
                tempo += req;
            } else {
                tempe += req;
            }
            
            bool possible = false;
            if (tempo <= a && tempe <= b) possible = true;
            else if (tempo <= b && tempe <= a) possible = true;
            
            if (possible) {
                odd = tempo;
                even = tempe;
                h++;
            } else {
                break;
            }
        }
        cout << h << "\n";
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