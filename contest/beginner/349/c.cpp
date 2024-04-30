#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int idx = 0;
    for(int i=0; i<s.size(); i++){
        if(int(s[i]-32)==int(t[idx])){
            idx++;
            if(idx == 2){
                if(t[idx]=='X'){
                    cout << "Yes" << endl;
                    return 0;
                }
            }else if(idx == 3){
                cout << "Yes" << endl;
                return 0;
            }
        }
        
    }
    cout << "No" << endl;
}