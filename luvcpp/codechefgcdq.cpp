//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa1JMZUFxSmZDMkZwOXY2WS1aZnA3SzBrY2RIUXxBQ3Jtc0tuRzhITDl6ZTNCdkJueWVzODRLXzdhR1d1YnFaWGNrZDdDWmRVeVExUWFCNkdTck1QZ1RuaEF0bjFYSkNsdjBhMDRXVzBvVy0tNmI4VlJlTUEyUVJBNlUwcEFoaDZXNVUyd1pOVmtaZGNhRjJkd0dIcw&q=https%3A%2F%2Fwww.codechef.com%2Fproblems%2FGCDQ&v=e3qhRh4UOug


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n, q;
// 		cin >> n >> q;
// 		int a[n+10];
// 		for(int i = 1; i <= n; ++i){
// 			cin >> a[i];
// 		}
// 		while(q--){
// 			int l, r;
// 			cin >> l >> r;
// 			int gc = 0;
// 			for(int i =1; i <= l-1; ++i){
// 				gc = __gcd(gc,a[i]);for(int i =1; i <= l-1; ++i){
// 				gc = __gcd(gc,a[i]);
// 			}
			
// 			}
// 			for(int i =r+1; i <= n; ++i){
// 				gc = __gcd(gc,a[i]);
// 			}
// 			cout << gc << endl;
			

			
// 		}
// 	}
	
// }
// time complexity needs to be resolved

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		int a[n+10];
		int forward[n+10];
		int backward[n+10];
		forward[0] = backward[n+1] = 0;
		for(int i = 1; i <= n;++i){
			cin >> a[i];
		}
		for(int i=1; i<=n;++i){
			forward[i] = __gcd(forward[i-1], a[i]);
		}
		for(int i = n; i >= 1; --i){
			backward[i] = __gcd(backward[i+1], a[i]);
		}
		while(q--){
			int l, r;
			cin >> l >> r;
			int gc = 0;
			
			cout << __gcd(forward[l-1], backward[r+1]) << endl;
			

			
		}
	}
	
}