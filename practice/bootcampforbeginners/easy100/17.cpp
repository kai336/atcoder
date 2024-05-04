#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v, v+n);

    double sum = (v[0] + v[1]) / 2.0;
    for(int i=2; i<n; i++){
        sum = (sum + v[i]) / 2.0;
    }

    cout << sum << endl;

}