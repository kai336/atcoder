#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> cnt(200);
    for(int i=0; i<s.size(); i++){
        cnt.at((int)s[i]) = 1;
    }

    for(int i=97; i<=122; i++){
        if(cnt.at(i) == 0){
            cout << (char)i << endl;
            return 0;
        }
    }
    
    cout << "None" << endl;
}