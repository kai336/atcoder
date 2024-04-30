#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000000000000

int main(){
    int n;
    cin >> n;
    long long lucas[100];
    lucas[0] = 2;
    lucas[1] = 1;
    for(int i=2; i<=n; i++){
        lucas[i] = lucas[i-1] + lucas[i-2];
    }

    cout << lucas[n] << endl;
    
}