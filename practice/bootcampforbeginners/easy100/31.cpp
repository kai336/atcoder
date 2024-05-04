#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> cnt(200);
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        cnt.at((int)s[i])++;
        if(cnt.at((int)s[i]) > 1){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
}