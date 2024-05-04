#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3], n;
    for(int i = 0; i < 3; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    cin >> n;
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(a[j][k] == b[i]){
                    a[j][k] = 0;
                }
            }
        }
    }
    bool flag = false;
    for(int i = 0; i < 3; i++){
        if(a[i][0] + a[i][1] + a[i][2] == 0){
            flag = true;
        }else if(a[0][i] + a[1][i] + a[2][i] == 0){
            flag = true;
        }
    }
    if(!flag){
        if(a[0][0] + a[1][1] + a[2][2] == 0){
            flag = true;
        }else if(a[0][2] + a[1][1] + a[2][0] == 0){
            flag = true;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}