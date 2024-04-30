#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m >> c;
    int b[m], a[n][m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        int tmp = c;
        for(int j = 0; j < m; j++){
            tmp += a[i][j] * b[j];
        }
        if(tmp > 0) sum++;
    }
    cout << sum << endl;
}