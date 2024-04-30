#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int c[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> c[i][j];
        }
    }
    int a[3], b[3];
    for(int i=0; i<3; i++){
        a[i] = c[(i+1)%3][0]-c[i][0];
        b[i] = c[0][(i+1)%3]-c[0][i];
    }
    for(int i=0; i<3; i++){
        for(int j=1; j<3; j++){
            if(a[i]!=c[(i+1)%3][j]-c[i][j]){
                cout << "No" << endl;
                return 0;
            }
            if(b[i]!=c[j][(i+1)%3]-c[j][i]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
} 