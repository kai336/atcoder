#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int ans = 0;
    int sum = a[0];
    for(int i=1; i<n; i++){
        sum += a[i];
        if(sum > k){
            ans++;
            sum = a[i];
        }
    }
    cout << ans+1 << endl;
}