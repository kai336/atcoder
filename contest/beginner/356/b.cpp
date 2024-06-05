#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    long long a[m], x[m];
    for(int i=0; i<m; i++) cin >> a[i];
    for(int i=0; i<m; i++) x[i] = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            long long tmp;
            cin >> tmp;
            x[j] += tmp;
        }
    }

    for(int i=0; i<m; i++){
        if(a[i]>x[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}