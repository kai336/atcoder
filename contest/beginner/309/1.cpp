#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int aidx[2], bidx[2];
    int table[5][5] = {{0, 0, 0, 0, 0}, {0, 1, 2, 3, 0}, {0, 4, 5, 6, 0}, {0, 7, 8, 9, 0}, {0, 0, 0, 0, 0}};
    for(int i=1; i<4; i++){
        for(int j=1; j<4; j++){
            if(table[i][j] == a){
                aidx[0] = i;
                aidx[1] = j;
            }
            if(table[i][j] == b){
                bidx[0] = i;
                bidx[1] = j;
            }
        }
        
    }
    if(aidx[0] == bidx[0] && abs(aidx[1] - bidx[1]) == 1){
            cout << "Yes" << endl;
        }else cout << "No" << endl;
}