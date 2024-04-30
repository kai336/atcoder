#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s.at(i);
    }
    int ans = 0;
    int tmp = 0;
    for(int i=0; i<d; i++){
        bool isfree = true;
        for(int j=0; j<n; j++){
            if(s.at(j)[i]=='x'){
                isfree = false;
                break;
            } 
        }
        if(isfree){
            tmp++;
            ans = max(ans, tmp);
        }else tmp = 0;
    }
    cout << ans << endl;
}