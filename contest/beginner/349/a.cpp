#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=0; i<n-1; i++){
        int tmp;
        cin >> tmp;
        ans -= tmp;
    }
    cout << ans << endl;
    return 0;
}