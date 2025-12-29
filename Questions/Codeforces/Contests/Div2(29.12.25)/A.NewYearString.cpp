    #include <bits/stdc++.h>
    using namespace std;
     
    void solution() {
        int n;
                cin >> n;
                string s;
                cin >> s;
                
                int c1 = 0;
                for (int i = 0; i + 3 < n; i++) {
                    if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') {
                        c1++;
                    }
                }
                
                int c2 = n; 
                for (int i = 0; i + 3 < n; i++) {
                    int curr = 0;
                    if (s[i] != '2') curr++;
                    if (s[i+1] != '0') curr++;
                    if (s[i+2] != '2') curr++;
                    if (s[i+3] != '6') curr++;
                    
                    if (curr < c2){
                        c2 = curr;
                }
            }
                
                if (c1 < c2){
                    cout << c1 << "\n";
                } 
                else cout << c2 << "\n";
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