#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, n;
    long long ans = 1;
    cin >> d >> n;
    if(n==100) n++;
    for(int i=0; i<d; i++){
        ans *= 100;
    }
    cout << ans * n << endl;
}