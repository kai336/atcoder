#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a[n];
    string b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    for(int i=0; i<n-1; i++){
        b[i][0] = a[i+1][0];
        b[0][n-i-1] = a[0][n-i-2];
        b[n-i-1][n-1] = a[n-i-2][n-1];
        b[n-1][i] = a[n-1][i+1];
    }
    for(int i=0; i<n; i++){
        cout << b[i] << endl;
    }
}