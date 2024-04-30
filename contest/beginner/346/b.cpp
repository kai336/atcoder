#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int w, b;
    cin >> w >> b;

    string s = "wbwbwwbwbwbw";
    int size = s.size();
    int len = w + b;
    for(int i=0; i<size; i++){
        // start from i
        int ww = 0;
        int bb = 0;
        for(int j=0; j<len; j++){
            //cout << (i+j)%size << ' ' << s[(i+j)%size] << endl;
            if(s[(i+j)%size]=='w') ww++;
            else bb++;
        }
        //cout << ww << ' ' << bb << endl;
        if(ww==w && bb==b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}