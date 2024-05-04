#include <bits/stdc++.h>
using namespace std;

int main(){
    long long k, n;
    cin >> k >> n;
    long long a[n];
    for(long long i=0; i<n; i++){
        cin >> a[i];
    }

    long long diff[n], maxdiff, sum;
    maxdiff = 0;
    sum = 0;
    diff[0] = k - a[n-1] + a[0];
    sum += diff[0];
    maxdiff = max(maxdiff, diff[0]);
    for(long long i=1; i<n; i++){
        diff[i] = a[i] - a[i-1];
        sum += diff[i];
        maxdiff = max(maxdiff, diff[i]);
    }

    cout << sum - maxdiff << endl;
}