#include <bits/stdc++.h>
using namespace std;

int main(){
    string w;
    cin >> w;
    vector<int> cnt(200);
    for(int i=0; i<w.size(); i++){
        cnt.at((int)w[i])++;
    }
    for(int i=0; i<200; i++){
        if(cnt.at(i) % 2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}