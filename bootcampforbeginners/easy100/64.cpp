#include <bits/stdc++.h>
using namespace std;

int main(){
    string o, e;
    cin >> o >> e;
    int len  = min(o.size(), e.size());
    
    for(int i=0; i<len; i++){
        cout << o.at(i) << e.at(i);
    }
    if(o.size() < e.size()){
        cout << e.at(len) << endl;
    }else if(o.size() > e.size()){
        cout << o.at(len) << endl;
    }
}