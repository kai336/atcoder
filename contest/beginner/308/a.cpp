#include <bits/stdc++.h>
using namespace std;

int main(){
    int s[8];
    for(int i = 0; i < 8; i++){
        cin >> s[i];
    }
    int tmp = 0;
    bool flag = true;
    for(int i = 0; i < 8; i++){
        if(s[i] % 25 != 0){
            cout << "No" << endl;
            flag = false;
            break;
        }else if(s[i] < tmp){
            cout << "No" << endl;
            flag = false;
            break;
        }else if(100 > s[i] || s[i] > 675){
            cout << "No" << endl;
            flag = false;
            break;
        }
        tmp = s[i];
    }
    if(flag) cout << "Yes" << endl;
}