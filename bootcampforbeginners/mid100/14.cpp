#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<pair<char, bool>>> s(h);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            char tmp;
            cin >> tmp;
            s[i].push_back(make_pair(tmp, false));
        }
    }
    for(int i=0; i<h-1; i++){
        for(int j=0; j<w-1; j++){
            if(s[i][j].first=='#'){
                bool flag = (s[i+1][j].first=='#' || s[i][j+1].first=='#');
                if(flag){
                    s[i][j].second = true;
                    s[i][j+1].second = true;
                    s[i+1][j].second = true;
                }
            }
        }
    }
    for(int j=0; j<w-1; j++){
        if(s[h-1][j].first=='#'){
            if(s[h-1][j+1].first=='#'){
                s[h-1][j].second = true;
                s[h-1][j+1].second = true;
            }
        }
    }
    for(int i=0; i<h-1; i++){
        if(s[i][w-1].first=='#' && s[i+1][w-1].first=='#'){
            s[i][w-1].second = true;
            s[i+1][w-1].second = true;
        }
    }
    bool yes = true;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(s[i][j].first=='#' && s[i][j].second==false){
                yes = false;
                break;
            }
        }
    }
    if(yes) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 