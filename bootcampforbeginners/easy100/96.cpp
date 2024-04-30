#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int evencnt = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2 == 0){
            evencnt++;
        }
    }
    int ans = pow(3, n) - pow(2, evencnt);
    cout << ans << endl;
}