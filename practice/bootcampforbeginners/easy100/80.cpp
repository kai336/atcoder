#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    for(long long i=(long long)sqrt(n); i>0; i--){
        if(n % i == 0){
            long long ans = i + n / i - 2;
            cout << ans << endl;
            return 0;
        }
    }
}

// sqrt igaito tittyakunarune