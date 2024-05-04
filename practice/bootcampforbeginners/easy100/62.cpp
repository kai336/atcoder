#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    for(int i=0; i<h; i++){
        cin >> c.at(i);
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<2; j++){
            cout << c.at(i) << endl;
        }
    }
}