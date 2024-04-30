#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for(int i=0; i<h; i++){
        cin >> a[i];
    }
    for(int i=0; i<h; i++){
        bool flag = true;
        for(int j=0; j<w; j++){
            if(a[i][j]=='#'){
                flag = false;
                break;
            }
        }
        if(flag){
            a.erase(a.begin()+i);
            i--;
            h--;
        }
    }
    for(int j=0; j<w; j++){
        bool flag = true;
        for(int i=0; i<h; i++){
            if(a[i][j]=='#'){
                flag = false;
                break;
            }
        }
        if(flag){
            for(int i=0; i<h; i++){
                a.at(i).erase(j, 1);
            }
            j--;
            w--;
        }
    }
    
    for(int i=0; i<h; i++){
        cout << a[i] << endl;
    }

    return 0;
} 