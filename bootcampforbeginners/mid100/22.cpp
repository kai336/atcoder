#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    double n, k;
    cin >> n >> k;
    double ans = 0;
    for(int i=1; i<=n; i++){
        double p = 1/double(n);
        int tmp = i;
        while(tmp<k){
            p /= 2;
            tmp *= 2;
        }
        ans += p;
    }
    printf("%.12f\n", ans);
    return 0;
}