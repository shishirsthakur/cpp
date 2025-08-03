#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Use long long for sum to avoid overflow
    long long suml = 0;
    for (int i = 0; i < n; ++i) {
        suml += arr[i];
    }

    // Initialize first and last with the first element of the array
    long long first = 1;
    long long last = n;

    // Find min and max
    for (int i = 1; i < n; ++i) {
        if (arr[i] < first) first = arr[i];
        if (arr[i] > last) last = arr[i];
    }

    long long count = last - first + 1;
    long long sumf = count * (first + last) / 2;

    cout << sumf-suml;

    return 0;
}
