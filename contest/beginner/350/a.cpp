#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = stoi(s.substr(3,3));
    if(n<350 && n!=316 && n>0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0; 
}