#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l, r;
    l = -1;
    r = -1;
    for(int i=0; i<s.size(); i++){
        if(l == -1 && s.at(i) == 'A') l = i;
        if(r == -1 && s.at(s.size()-i-1) == 'Z') r = s.size() - i - 1;
    }
    cout << r - l + 1 << endl;
}