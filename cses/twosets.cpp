#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
cin.tie(0);

long long int n;
cin >> n;

vector<long long int> arr;
vector<long long int> firsthalf;
vector<long long int> second;

for (long long int i = 1; i <= n; i++){

      arr.push_back(i);

    }
// for(int i = 0; i < n; i++){
// 	cout << arr[i];
// }
// cout << "\n";

long long int sum = 0;

for(long long int i = 0; i < n; i++){
	sum += arr[i];
}
// cout << sum << "\n";
if(sum%2 == 0){
	cout << "YES" << "\n";
long long equal = sum/2;
// cout << equal << "\n";

long long int half = 0;

vector<bool> taken(n, false);

        for (long long int i = n - 1; i >= 0; i--) {
            if (half + arr[i] <= equal) {
                half += arr[i];
                
                firsthalf.push_back(arr[i]);
                taken[i] = true;
                if (half == equal) {
                    break;
                }
            }
        }
         for (long long int i = 0; i < n; i++) {
            if (!taken[i]) {
                second.push_back(arr[i]);
            }
        }

cout << firsthalf.size() << "\n";
        for (long long int i = 0; i < (int)firsthalf.size(); i++) {
            cout << firsthalf[i] << " ";
        }
        cout << "\n";

        // Print second using traditional for loop
        cout << second.size() << "\n";
        for (long long int i = 0; i < (int)second.size(); i++) {
            cout << second[i] << " ";
        }
        cout << "\n";
}


else{
	cout << "NO";
}
	
}