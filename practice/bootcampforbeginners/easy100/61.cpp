#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    for(int i=0; i<s.size(); i++){
        string subs = s.substr(i, s.size()-i) + s.substr(0, i);
        if(subs == t){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}