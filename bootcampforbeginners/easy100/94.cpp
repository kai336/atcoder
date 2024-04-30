#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int a[4];
    string op;
    for(int i=0; i<4; i++){
        a[i] = int(s[i])-48;
    }
    for(int bit=0; bit<(1<<3); bit++){
        int tmp = a[0];
        for(int i=2; i>=0; i--){
            if(bit & (1<<i)){
                tmp += a[i+1];
                op[i] = '+';
            }else{
                tmp -= a[i+1];
                op[i] = '-';
            }
        }
        if(tmp == 7){
            cout << a[0] << op[0] << a[1] << op[1] << a[2] << op[2] << a[3] << "=7" << endl;
            return 0;
        }
    }
}